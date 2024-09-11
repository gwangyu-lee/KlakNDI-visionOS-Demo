#if UNITY_USES_WEBCAM

#include "CameraCapture.h"
#include "AVCapture.h"
#include "CMVideoSampling.h"
#include "CVTextureCache.h"

#import <CoreVideo/CoreVideo.h>

#include <cmath>

static NSMutableArray<CameraCaptureController*> *activeColorAndDepthCameraControllers = nil;

@implementation CameraCaptureController
{
    AVCaptureDevice*            _captureDevice;
    AVCaptureSession*           _captureSession;
    AVCaptureDeviceInput*       _captureInput;
    AVCaptureVideoDataOutput*   _captureOutput;

    @public bool                _isDepth;

    uint8_t*                    _pixelBufferCopy;
    CMVideoSampling             _cmVideoSampling;
    NSString*                   _preset;
    @public void*               _userData;
    @public size_t              _width, _height;
}

- (bool)initCapture:(AVCaptureDevice*)device
{
    if (UnityGetAVCapturePermission(avVideoCapture) == avCapturePermissionDenied)
        return false;

    self.captureDevice = device;

    self.captureInput   = [[AVCaptureDeviceInput alloc] initWithDevice: device error:nil];
    self.captureOutput  = [[AVCaptureVideoDataOutput alloc] init];

    if (self.captureOutput == nil || self.captureInput == nil)
        return false;

    self.captureOutput.alwaysDiscardsLateVideoFrames = YES;
    NSDictionary* options = @{ (NSString*)kCVPixelBufferPixelFormatTypeKey: @(kCVPixelFormatType_32BGRA) };
    [self.captureOutput setVideoSettings: options];

    CMVideoSampling_Initialize(&self->_cmVideoSampling);

    _width = _height = 0;
    _pixelBufferCopy = nullptr;

    return true;
}

- (void)setCaptureFPS:(float)fps
{
    if ([self.captureDevice lockForConfiguration: nil])
    {
        if (self.captureDevice.activeFormat)
        {
            fps = [self pickAvailableFrameRate: fps];
            self.captureDevice.activeVideoMinFrameDuration = CMTimeMake(1, fps);
            self.captureDevice.activeVideoMaxFrameDuration = CMTimeMake(1, fps);
        }
        [self.captureDevice unlockForConfiguration];
    }
}

- (bool)initCapture:(AVCaptureDevice*)device preset:(NSString*)preset fps:(float)fps
{
    if (![self initCapture: device])
        return false;

    self.captureSession = [[AVCaptureSession alloc] init];
    [self.captureSession addInput: self.captureInput];
    [self.captureSession addOutput: self.captureOutput];

    // queue on main thread to simplify gles life
    [self.captureOutput setSampleBufferDelegate: self queue: dispatch_get_main_queue()];

    self->_preset = preset;
    [self setCaptureFPS: fps];

    return true;
}

- (void)captureOutput:(AVCaptureOutput*)captureOutput didOutputSampleBuffer:(CMSampleBufferRef)sampleBuffer fromConnection:(AVCaptureConnection*)connection
{
    intptr_t tex = (intptr_t)CMVideoSampling_SampleBuffer(&self->_cmVideoSampling, sampleBuffer, &_width, &_height);
    UnityDidCaptureVideoFrame(tex, self->_userData);
}

- (void)capturePixelBufferToMemBuffer:(uint8_t*)dst
{
    CVPixelBufferRef pbuf = (CVPixelBufferRef)self->_cmVideoSampling.cvImageBuffer;
    const size_t srcRowSize = CVPixelBufferGetBytesPerRow(pbuf);
    const size_t bufSize    = srcRowSize * self->_height;
    if (self->_pixelBufferCopy == nullptr)
    {
        self->_pixelBufferCopy = (uint8_t*)::malloc(bufSize);
    }

    // while not the best way memory-wise, we want to minimize stalling
    CVPixelBufferLockBaseAddress(pbuf, kCVPixelBufferLock_ReadOnly);
    {
        ::memcpy(self->_pixelBufferCopy, CVPixelBufferGetBaseAddress(pbuf), bufSize);
    }
    CVPixelBufferUnlockBaseAddress(pbuf, kCVPixelBufferLock_ReadOnly);

    OSType pixelFormat = CVPixelBufferGetPixelFormatType(pbuf);
    size_t bpp = 0;
    switch (pixelFormat)
    {
        case kCVPixelFormatType_32BGRA:
            bpp = 4;
            break;
        case kCVPixelFormatType_DepthFloat16:
            bpp = 2;
            break;
        default:
            assert(false);
            break;
    }
    const size_t dstRowSize = self->_width * bpp;

    uint8_t* src = self->_pixelBufferCopy + (self->_height - 1) * srcRowSize;
    for (size_t i = 0; i < self->_height; ++i)
    {
        ::memcpy(dst, src, dstRowSize);
        dst += dstRowSize;
        src -= srcRowSize;
    }
}

- (int)isCVTextureFlipped
{
    return IsCVTextureFlipped(self->_cmVideoSampling.cvTextureCacheTexture);
}

- (int)setFocusPointWithX:(float)x Y:(float)y
{
    return [self setFocusPoint];
}

- (int)setFocusPoint
{
    return 0;
}

+ (NSMutableArray<CameraCaptureController*>*)getActiveColorAndDepthCameraControllers
{
    if (activeColorAndDepthCameraControllers == nil)
    {
        activeColorAndDepthCameraControllers = [[NSMutableArray alloc] init];
    }
    return activeColorAndDepthCameraControllers;
}

+ (void)addColorAndDepthCameraController:(CameraCaptureController*)controller
{
    CameraCaptureController* prevController = [self findColorAndDepthCameraController: controller.captureDevice isDepth: controller->_isDepth];
    if (prevController != nil)
        [prevController pause];
    CameraCaptureController* otherController = [self findColorAndDepthCameraController: controller.captureDevice isDepth: !controller->_isDepth];
    if (otherController != nil)
    {
        [otherController.captureSession stopRunning];
        [otherController clearColorAndDepthCameraCaptureSession];
    }
    [[self getActiveColorAndDepthCameraControllers] addObject: controller];
}

+ (void)removeColorAndDepthCameraController:(CameraCaptureController*)controller
{
    [[self getActiveColorAndDepthCameraControllers] removeObject: controller];
    CameraCaptureController* otherController = [self findColorAndDepthCameraController: controller.captureDevice isDepth: !controller->_isDepth];
    if (otherController != nil)
    {
        [otherController initColorAndDepthCameraCaptureSession];
        [otherController.captureSession startRunning];
    }
}

+ (void)clearColorAndDepthCameraControllers
{
    NSMutableArray<CameraCaptureController*>* activeColorAndDepthCameraControllers = [self getActiveColorAndDepthCameraControllers];
    for (CameraCaptureController *controller in activeColorAndDepthCameraControllers)
    {
        if (controller.captureSession != nil)
        {
            [controller.captureSession stopRunning];
            [controller clearColorAndDepthCameraCaptureSession];
        }
    }
    [activeColorAndDepthCameraControllers removeAllObjects];
}

+ (CameraCaptureController*)findColorAndDepthCameraController:(AVCaptureDevice*)device isDepth:(bool)isDepth
{
    for (CameraCaptureController *controller in [self getActiveColorAndDepthCameraControllers])
    {
        if (controller.captureDevice == device && controller->_isDepth == isDepth)
            return controller;
    }
    return nil;
}

- (bool)initColorAndDepthCameraCapture:(AVCaptureDevice*)device preset:(NSString*)preset fps:(float)fps isDepth:(bool)isDepth
{
    if (![self initCapture: device])
        return false;

    self->_preset = preset;
    [self initColorAndDepthCameraCaptureSession];
    [self setCaptureFPS: fps];

    _isDepth = isDepth;

    return true;
}

- (void)initColorAndDepthCameraCaptureSession
{
    self.captureSession = [[AVCaptureSession alloc] init];
    [self.captureSession addInput: self.captureInput];
    [self.captureSession addOutput: self.captureOutput];
}

- (void)clearColorAndDepthCameraCaptureSession
{
    [self.captureSession removeInput: self.captureInput];
    [self.captureSession removeOutput: self.captureOutput];
    self.captureSession = nil;
}

- (void)start
{
    [CameraCaptureController clearColorAndDepthCameraControllers];
    [self.captureSession startRunning];
}

- (void)pause
{
    [self.captureSession stopRunning];
}

- (void)stop
{
    [self.captureSession stopRunning];
    [self.captureSession removeInput: self.captureInput];
    [self.captureSession removeOutput: self.captureOutput];

    self.captureInput = nil;
    self.captureOutput = nil;

    self.captureDevice = nil;
    self.captureSession = nil;

    if (self->_pixelBufferCopy != nullptr)
    {
        ::free(self->_pixelBufferCopy);
        self->_pixelBufferCopy = nullptr;
    }

    CMVideoSampling_Uninitialize(&self->_cmVideoSampling);
}

- (float)pickAvailableFrameRate:(float)fps
{
    AVFrameRateRange* bestRange = nil;
    float minDiff = INFINITY;
    float epsilon = 0.1;

    fps = fps > epsilon ? fps : 24;
    for (AVFrameRateRange* rate in self.captureDevice.activeFormat.videoSupportedFrameRateRanges)
    {
        if (fps + epsilon > rate.minFrameRate && fps - epsilon < rate.maxFrameRate)
            return fps;
        else
        {
            float diff = ::fmin(::fabs(fps - rate.minFrameRate), ::fabs(fps - rate.maxFrameRate));
            if (diff < minDiff)
            {
                minDiff = diff;
                bestRange = rate;
            }
        }
    }
    return fps > bestRange.maxFrameRate ? bestRange.maxFrameRate : bestRange.minFrameRate;
}

@synthesize captureDevice   = _captureDevice;
@synthesize captureSession  = _captureSession;
@synthesize captureOutput   = _captureOutput;
@synthesize captureInput    = _captureInput;

@end

// Preset for getting depth data with max resolution available
static NSMutableArray<CameraCaptureDevice*> *videoCaptureDevices = nil;

@implementation CameraCaptureDevice
{
    @public AVCaptureDevice* _device;
    @public int _frontFacing;
    @public int _autoFocusPointSupported;
    @public WebCamKind _kind;
    @public NSMutableArray<NSValue*>* _resolutions;
    NSMutableArray<NSString*>* _resPresets;
}

- (bool)isColorAndDepthCaptureDevice
{
    return false;
}

- (WebCamKind)getKind
{
    if ([self->_device.localizedName containsString: @"Telephoto"])
        return kWebCamTelephoto;
    if ([self->_device.localizedName containsString: @"Ultra Wide"])
        return kWebCamUltraWideAngle;
    if ([self->_device.localizedName containsString: @"Dual"] && [self isColorAndDepthCaptureDevice])
        return kWebCamColorAndDepth;
    if ([self->_device.localizedName containsString: @"TrueDepth"] && [self isColorAndDepthCaptureDevice])
        return kWebCamColorAndDepth;
    return kWebCamWideAngle;
}

- (void)fillCaptureDeviceResolutions
{
    const int count = 0;

    self->_resolutions = [NSMutableArray arrayWithCapacity: count];
    self->_resPresets = [NSMutableArray arrayWithCapacity: count];
    AVCaptureInput* captureInput = [[AVCaptureDeviceInput alloc] initWithDevice: self->_device error: nil];

    //Don't attempt to setup an AVCaptureSession if the user has explicitly denied permission to use the camera.
    if (captureInput != nil)
    {
        AVCaptureSession* captureSession = [[AVCaptureSession alloc] init];
        [captureSession addInput: captureInput];
    }
}

- (NSString*)pickPresetFromWidth:(int)w height:(int)h
{
    return nil;
}

- (CameraCaptureDevice*)initWithDevice:(AVCaptureDevice*)device
{
    self->_device = device;
    self->_frontFacing = device.position == AVCaptureDevicePositionFront ? 1 : 0;
    self->_autoFocusPointSupported = 0;
    self->_kind = [self getKind];
    [self fillCaptureDeviceResolutions];
    return self;
}

- (bool)initCaptureForController:(CameraCaptureController*)controller width:(int)w height:(int)h fps:(float)fps isDepth:(bool)isDepth
{
    bool initResult = false;
    NSString *preset = [self pickPresetFromWidth: w height: h];

    if ([self isColorAndDepthCaptureDevice])
    {
        initResult = [controller initColorAndDepthCameraCapture: self->_device preset: preset fps: fps isDepth: isDepth];
    }
    else
    {
        assert(!isDepth);
        initResult = [controller initCapture: self->_device preset: preset fps: fps];
    }
    return initResult;
}

+ (bool)initialized
{
    return videoCaptureDevices != nil;
}

+ (void)createCameraCaptureDevicesArray
{
    videoCaptureDevices = [NSMutableArray arrayWithCapacity: 2];
}

+ (void)addCameraCaptureDevice:(AVCaptureDevice*)device
{
    [videoCaptureDevices addObject: [[CameraCaptureDevice alloc] initWithDevice: device]];
}

@end


extern "C" void UnityEnumVideoCaptureDevices(void* udata, void(*callback)(void* udata, const char* name, int frontFacing, int autoFocusPointSupported, int kind, const int* resolutions, int resCount))
{
    if (![CameraCaptureDevice initialized])
    {
        [CameraCaptureDevice createCameraCaptureDevicesArray];
    }

    // we should not provide camera devices information while access has not been granted
    // but we need to try to enumerate camera devices anyway to trigger permission request dialog
    if ([AVCaptureDevice authorizationStatusForMediaType: AVMediaTypeVideo] != AVAuthorizationStatusAuthorized)
        return;

    for (CameraCaptureDevice *cameraCaptureDevice in videoCaptureDevices)
    {
        int resCount = (int)[cameraCaptureDevice->_resolutions count];
        int *resolutions = new int[resCount * 2];
        for (int i = 0; i < resCount; ++i)
        {
            resolutions[i * 2] = (int)[cameraCaptureDevice->_resolutions[i] CGSizeValue].width;
            resolutions[i * 2 + 1] = (int)[cameraCaptureDevice->_resolutions[i] CGSizeValue].height;
        }
        callback(udata, [cameraCaptureDevice->_device.localizedName UTF8String], cameraCaptureDevice->_frontFacing, cameraCaptureDevice->_autoFocusPointSupported, cameraCaptureDevice->_kind, resolutions, resCount);
        delete[] resolutions;
    }
}

extern "C" void* UnityInitCameraCapture(int deviceIndex, int w, int h, int fps, int isDepth, void* udata)
{
    if (videoCaptureDevices != nil && deviceIndex < videoCaptureDevices.count)
    {
        CameraCaptureController* controller = [CameraCaptureController alloc];
        bool initResult = [videoCaptureDevices[deviceIndex] initCaptureForController: controller width: w height: h fps: (float)fps isDepth: (isDepth != 0)];
        if (initResult)
        {
            controller->_userData = udata;
            return (__bridge_retained void*)controller;
        }
        controller = nil;
    }
    return 0;
}

extern "C" void UnityStartCameraCapture(void* capture)
{
    [(__bridge CameraCaptureController*)capture start];
}

extern "C" void UnityPauseCameraCapture(void* capture)
{
    [(__bridge CameraCaptureController*)capture pause];
}

extern "C" void UnityStopCameraCapture(void* capture)
{
    CameraCaptureController* controller = (__bridge_transfer CameraCaptureController*)capture;
    [controller stop];
    controller = nil;
}

extern "C" void UnityCameraCaptureExtents(void* capture, int* w, int* h)
{
    CameraCaptureController* controller = (__bridge CameraCaptureController*)capture;
    if (controller == nil)
        return;
    *w = (int)controller->_width;
    *h = (int)controller->_height;
}

extern "C" void UnityCameraCaptureReadToMemory(void* capture, void* dst_, int w, int h)
{
    CameraCaptureController* controller = (__bridge CameraCaptureController*)capture;
    if (controller == nil)
        return;
    assert(w == controller->_width && h == controller->_height);
    [controller capturePixelBufferToMemBuffer: (uint8_t*)dst_];
}

extern "C" int UnityCameraCaptureVideoRotationDeg(void* capture)
{
    CameraCaptureController* controller = (__bridge CameraCaptureController*)capture;
    if (controller == nil)
        return 0;

    // all cams are landscape.
    switch (UnityCurrentOrientation())
    {
        case portrait:              return 90;
        case portraitUpsideDown:    return 270;
        case landscapeLeft:         return controller.captureDevice.position == AVCaptureDevicePositionFront ? 180 : 0;
        case landscapeRight:        return controller.captureDevice.position == AVCaptureDevicePositionFront ? 0 : 180;

        default:                    assert(false && "bad orientation returned from UnityCurrentOrientation()"); break;
    }
    return 0;
}

extern "C" int UnityCameraCaptureVerticallyMirrored(void* capture)
{
    CameraCaptureController* controller = (__bridge CameraCaptureController*)capture;
    if (controller == nil)
        return 0;
    return [controller isCVTextureFlipped];
}

extern "C" int UnityCameraCaptureSetAutoFocusPoint(void* capture, float x, float y)
{
    CameraCaptureController* controller = (__bridge CameraCaptureController*)capture;
    if (controller == nil)
        return 0;
    return [controller setFocusPointWithX: x Y: y];
}

#else

// Stubs for either AppleTV or when UNITY_USES_WEBCAM is not defined

extern "C" void UnityEnumVideoCaptureDevices(void* udata, void(*callback)(void* udata, const char* name, int frontFacing, int autoFocusPointSupported, int kind, const int* resolutions, int resCount))
{
}

extern "C" void* UnityInitCameraCapture(int deviceIndex, int w, int h, int fps, int isDepth, void* udata)
{
    return 0;
}

extern "C" void UnityStartCameraCapture(void* capture)
{
}

extern "C" void UnityPauseCameraCapture(void* capture)
{
}

extern "C" void UnityStopCameraCapture(void* capture)
{
}

extern "C" void UnityCameraCaptureExtents(void* capture, int* w, int* h)
{
}

extern "C" void UnityCameraCaptureReadToMemory(void* capture, void* dst_, int w, int h)
{
}

extern "C" int UnityCameraCaptureVideoRotationDeg(void* capture)
{
    return 0;
}

extern "C" int UnityCameraCaptureVerticallyMirrored(void* capture)
{
    return 0;
}

extern "C" int UnityCameraCaptureSetAutoFocusPoint(void* capture, float x, float y)
{
    return 0;
}

#endif
