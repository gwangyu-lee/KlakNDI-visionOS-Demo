#import <ARKit/anchor.h>
#import <ARKit/hand_tracking.h>
#import <ARKit/image_tracking.h>
#import <ARKit/plane_detection.h>
#import <ARKit/scene_reconstruction.h>
#import <ARKit/session.h>
#import <ARKit/world_tracking.h>

#include <CoreFoundation/CoreFoundation.h>
#include <vector>

static std::vector<ar_plane_anchor_t> tmp_added_planes;
static std::vector<ar_plane_anchor_t> tmp_updated_planes;
static std::vector<ar_plane_anchor_t> tmp_removed_planes;

static std::vector<ar_image_anchor_t> tmp_added_images;
static std::vector<ar_image_anchor_t> tmp_updated_images;
static std::vector<ar_image_anchor_t> tmp_removed_images;

static std::vector<ar_world_anchor_t> tmp_added_anchors;
static std::vector<ar_world_anchor_t> tmp_updated_anchors;
static std::vector<ar_world_anchor_t> tmp_removed_anchors;
static float* tmp_matrix_floats = new float[16];

bool s_ImmersiveSpaceReady;

#define EXTERNC extern "C"
#define EXPORT(RETURN_TYPE) EXTERNC RETURN_TYPE __attribute__ ((visibility("default")))  __attribute__((__used__))

typedef void(*unity_ar_authorization_results_handler_t)(ar_authorization_results_t authorization_results, ar_error_t _Nullable error);

typedef void(*unity_authorization_results_enumeration_step_callback_t)(ar_authorization_result_t authorization_result);

typedef void(*unity_authorization_results_enumeration_completed_callback_t)();

typedef void(*unity_ar_plane_detection_update_handler_t)(void* added_anchors, int added_anchor_count,
                                                         void* updated_anchors, int updated_anchor_count,
                                                         void* removed_anchors, int removed_anchor_count);

typedef void(*unity_ar_image_tracking_update_handler_t)(void* added_anchors, int added_anchor_count,
                                                        void* updated_anchors, int updated_anchor_count,
                                                        void* removed_anchors, int removed_anchor_count);


typedef void(*unity_ar_hand_tracking_update_handler_t)(ar_hand_anchor_t hand_anchor_left, ar_hand_anchor_t hand_anchor_right);

typedef void(*unity_ar_session_data_provider_state_change_handler_t)(ar_data_providers_t data_providers,
                                                                   ar_data_provider_state_t new_state,
                                                                   _Nullable ar_error_t error,
                                                                   _Nullable ar_data_provider_t failed_provider);

typedef void(*unity_ar_authorization_update_handler_t)(ar_authorization_result_t authorization_result);

typedef void(*unity_ar_world_tracking_update_handler_t)(void* added_anchors, int added_anchor_count,
                                                        void* updated_anchors, int updated_anchor_count,
                                                        void* removed_anchors, int removed_anchor_count);

typedef void(*unity_ar_world_tracking_add_anchor_completion_handler_t)(ar_world_anchor_t world_anchor, bool successful, ar_error_t _Nullable error);
typedef void(*unity_ar_world_tracking_remove_anchor_completion_handler_t)(ar_world_anchor_t world_anchor, bool successful, ar_error_t _Nullable error);

typedef void(*unity_spatial_input_event_callback)(int eventCount, const void* eventsPtr);

unity_spatial_input_event_callback s_OnInputEvent = nullptr;

EXPORT(void) UnityVisionOS_impl_ar_session_set_data_provider_state_change_handler(ar_session_t session, unity_ar_session_data_provider_state_change_handler_t data_provider_state_change_handler)
{
    ar_session_set_data_provider_state_change_handler(session, nullptr, ^(ar_data_providers_t data_providers,
                                                                 ar_data_provider_state_t new_state,
                                                                 _Nullable ar_error_t error,
                                                                 _Nullable ar_data_provider_t failed_provider)
    {
        data_provider_state_change_handler(data_providers, new_state, error, failed_provider);
    });
}

EXPORT(void) UnityVisionOS_impl_ar_session_set_authorization_update_handler(ar_session_t session, unity_ar_authorization_update_handler_t authorization_update_handler)
{
    ar_session_set_authorization_update_handler(session, nullptr, ^(ar_authorization_result_t authorization_result)
    {
        authorization_update_handler(authorization_result);
    });
}

EXPORT(void) UnityVisionOS_impl_ar_session_request_authorization(ar_session_t session,
    ar_authorization_type_t authorization_types, unity_ar_authorization_results_handler_t results_handler)
{
    ar_session_request_authorization(session, authorization_types, ^(ar_authorization_results_t authorization_results, ar_error_t _Nullable error)
    {
        results_handler(authorization_results, error);
    });
}

EXPORT(void) UnityVisionOS_impl_ar_session_query_authorization_results(ar_session_t session,
    ar_authorization_type_t authorization_types, unity_ar_authorization_results_handler_t results_handler)
{
    ar_session_query_authorization_results(session, authorization_types, ^(ar_authorization_results_t authorization_results, ar_error_t _Nullable error)
    {
        results_handler(authorization_results, error);
    });
}

EXPORT(void) UnityVisionOS_impl_ar_plane_detection_provider_set_update_handler(ar_plane_detection_provider_t plane_detection_provider,
    unity_ar_plane_detection_update_handler_t plane_detection_update_handler)
{
    ar_plane_detection_provider_set_update_handler(plane_detection_provider, nullptr, ^(
        ar_plane_anchors_t added_anchors,
        ar_plane_anchors_t updated_anchors,
        ar_plane_anchors_t removed_anchors)
    {
        __block size_t added_anchor_count = ar_plane_anchors_get_count(added_anchors);
        __block size_t enumerationCount = 0;
        tmp_added_planes.clear();
        if (added_anchor_count > 0)
        {
            ar_plane_anchors_enumerate_anchors(added_anchors, ^bool(ar_plane_anchor_t  _Nonnull plane_anchor)
            {
                tmp_added_planes.push_back(plane_anchor);
                return ++enumerationCount < added_anchor_count;
            });
        }

        __block size_t updated_anchor_count = ar_plane_anchors_get_count(updated_anchors);
        enumerationCount = 0;
        tmp_updated_planes.clear();
        if (updated_anchor_count > 0)
        {
            ar_plane_anchors_enumerate_anchors(updated_anchors, ^bool(ar_plane_anchor_t  _Nonnull plane_anchor)
            {
                tmp_updated_planes.push_back(plane_anchor);
                return ++enumerationCount < updated_anchor_count;
            });
        }

        __block size_t removed_anchor_count = ar_plane_anchors_get_count(removed_anchors);
        enumerationCount = 0;
        tmp_removed_planes.clear();
        if (removed_anchor_count > 0)
        {
            ar_plane_anchors_enumerate_anchors(removed_anchors, ^bool(ar_plane_anchor_t  _Nonnull plane_anchor)
            {
                tmp_removed_planes.push_back(plane_anchor);
                return ++enumerationCount < removed_anchor_count;
            });
        }

        plane_detection_update_handler(tmp_added_planes.data(), (int)added_anchor_count, tmp_updated_planes.data(), (int)updated_anchor_count, tmp_removed_planes.data(), (int)removed_anchor_count);
    });
}

EXPORT(void) UnityVisionOS_impl_ar_image_tracking_provider_set_update_handler(ar_image_tracking_provider_t image_tracking_provider,
    unity_ar_image_tracking_update_handler_t image_tracking_update_handler)
{
    ar_image_tracking_provider_set_update_handler(image_tracking_provider, nullptr, ^(
        ar_image_anchors_t added_anchors,
        ar_image_anchors_t updated_anchors,
        ar_image_anchors_t removed_anchors)
    {
        __block size_t added_anchor_count = ar_image_anchors_get_count(added_anchors);
        __block size_t enumerationCount = 0;
        tmp_added_images.clear();
        if (added_anchor_count > 0)
        {
            ar_image_anchors_enumerate_anchors(added_anchors, ^bool(ar_image_anchor_t  _Nonnull image_anchor)
            {
                tmp_added_images.push_back(image_anchor);
                return ++enumerationCount < added_anchor_count;
            });
        }

        __block size_t updated_anchor_count = ar_image_anchors_get_count(updated_anchors);
        enumerationCount = 0;
        tmp_updated_images.clear();
        if (updated_anchor_count > 0)
        {
            ar_image_anchors_enumerate_anchors(updated_anchors, ^bool(ar_image_anchor_t  _Nonnull image_anchor)
            {
                tmp_updated_images.push_back(image_anchor);
                return ++enumerationCount < updated_anchor_count;
            });
        }

        __block size_t removed_anchor_count = ar_image_anchors_get_count(removed_anchors);
        enumerationCount = 0;
        tmp_removed_images.clear();
        if (removed_anchor_count > 0)
        {
            ar_image_anchors_enumerate_anchors(removed_anchors, ^bool(ar_image_anchor_t  _Nonnull image_anchor)
            {
                tmp_removed_images.push_back(image_anchor);
                return ++enumerationCount < removed_anchor_count;
            });
        }

        image_tracking_update_handler(tmp_added_images.data(), (int)added_anchor_count, tmp_updated_images.data(), (int)updated_anchor_count, tmp_removed_images.data(), (int)removed_anchor_count);
    });
}

EXPORT(void*) UnityVisionOS_impl_ar_geometry_source_get_buffer(ar_geometry_source_t geometry_source)
{
    id<MTLBuffer> buffer = ar_geometry_source_get_buffer(geometry_source);
    return buffer.contents;
}

// TODO: Not sure why we can't call ar_anchor_get_origin_from_anchor_transform directly but it was giving back the same pointer you gave it
EXPORT(float*) UnityVisionOS_impl_ar_anchor_get_origin_from_anchor_transform_to_float_array(ar_anchor_t anchor)
{
    simd_float4x4 worldMatrix = ar_anchor_get_origin_from_anchor_transform(anchor);

    // TODO: cast or something faster?
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int index = i * 4 + j;
            tmp_matrix_floats[index] = worldMatrix.columns[i][j];
        }
    }

    //TODO: Why does ARKit sometimes give us 3,3 != 1?
    // Suppress Assert(ValidTRS());
    tmp_matrix_floats[15] = 1;

    return tmp_matrix_floats;
}

EXPORT(float*) UnityVisionOS_impl_simd_float4x4_to_float_array(simd_float4x4 matrix)
{
    // TODO: cast or something faster?
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int index = i * 4 + j;
            tmp_matrix_floats[index] = matrix.columns[i][j];
        }
    }

    //TODO: Why does ARKit sometimes give us 3,3 != 1?
    // Suppress Assert(ValidTRS());
    tmp_matrix_floats[15] = 1;

    return tmp_matrix_floats;
}

// UnityEngine.TextureFormat
enum TextureFormat
{
    kTextureFormatAlpha8 = 1,
    kTextureFormatRGB24 = 3,
    kTextureFormatRGBA32 = 4,
    kTextureFormatARGB32 = 5,
    kTextureFormatR16 = 9,
    kTextureFormatBGRA32 = 14,
    kTextureFormatRFloat = 18,
    kTextureFormatYUY2 = 21,
    kTextureFormatR8 = 63,

    // This value is not UnityEngine.TextureFormat but is needed to indicate a conversion does not exist.
    kTextureFormatInvalid = 0xFFFFFFFF
};

EXPORT(void) UnityVisionOS_impl_add_image(ar_reference_images_t reference_images,
                                          void* bytes,
                                          TextureFormat format,
                                          int width,
                                          int height,
                                          float physicalWidth,
                                          const char * name)
{
    OSType pixelFormatType;
    size_t bytesPerRow;
    switch (format)
    {
        case TextureFormat::kTextureFormatR8:
        case TextureFormat::kTextureFormatAlpha8:
            pixelFormatType = kCVPixelFormatType_OneComponent8;
            bytesPerRow = width;
            break;
        case TextureFormat::kTextureFormatR16:
            pixelFormatType = kCVPixelFormatType_OneComponent16Half;
            bytesPerRow = width * 2;
            break;
        case TextureFormat::kTextureFormatRFloat:
            pixelFormatType = kCVPixelFormatType_OneComponent32Float;
            bytesPerRow = width * 4;
            break;
        case TextureFormat::kTextureFormatRGB24:
            pixelFormatType = kCVPixelFormatType_24RGB;
            bytesPerRow = width * 3;
            break;
        case TextureFormat::kTextureFormatARGB32:
            pixelFormatType = kCVPixelFormatType_32ARGB;
            bytesPerRow = width * 4;
            break;
        case TextureFormat::kTextureFormatBGRA32:
            pixelFormatType = kCVPixelFormatType_32BGRA;
            bytesPerRow = width * 4;
            break;
        default:
            NSLog(@"Error adding reference image: Unsupported texture format %d", (int)format);
            return;
    }

    CVPixelBufferRef pixelBuffer = nil;
    CVReturn result = CVPixelBufferCreateWithBytes(kCFAllocatorDefault, width, height, pixelFormatType, bytes, bytesPerRow, nil, nil, nil, &pixelBuffer);
    if (result != kCVReturnSuccess) {
        NSLog(@"Error adding reference image: CVPixelBufferCreateWithBytes returned %d", (int)result);
        return;
    }

    ar_reference_image_t image_to_add = ar_reference_image_create_from_pixel_buffer(pixelBuffer, kCGImagePropertyOrientationDownMirrored, physicalWidth);

    CFRelease(pixelBuffer);

    ar_reference_images_add_image(reference_images, image_to_add);

    ar_reference_image_set_name(image_to_add, name);
}

EXPORT(ar_reference_image_t) UnityVisionOS_impl_get_reference_image_at_index(ar_reference_images_t reference_images, int index)
{
    __block size_t reference_image_count = ar_reference_images_get_count(reference_images);
    __block size_t enumerationCount = 0;
    __block ar_reference_image_t found_reference_image = nullptr;
    if (reference_image_count > 0)
    {
        ar_reference_images_enumerate_images(reference_images, ^bool(ar_reference_image_t  _Nonnull reference_image) {
            if (enumerationCount == index)
            {
                found_reference_image = reference_image;
                return false;
            }

            return ++enumerationCount < reference_image_count;
        });
    }

    return found_reference_image;
}

typedef struct {
    void* _Nullable data;
    int32_t count;
} native_view_t;

// TODO: Refactor this method to use CoreFoundation stuff instead of NSBundle (can be moved to C#?)
EXPORT(CFBundleRef) UnityVisionOS_impl_CreateFromCompiledAssetCatalog(const char* libraryGuid, native_view_t carFileContents)
{
    void* bytes = carFileContents.data;
    int32_t byteCount = carFileContents.count;
    NSString* bundleIdentifierString = [NSString stringWithFormat:@"%@%@", [NSBundle.mainBundle bundleIdentifier], [NSString stringWithUTF8String:libraryGuid]];
    NSDictionary* plist = [NSDictionary dictionaryWithObject:bundleIdentifierString
                                                      forKey:@"CFBundleIdentifier"];
    NSError* error = nil;
    NSData* plistData = [NSPropertyListSerialization dataWithPropertyList:plist
                                                                   format:NSPropertyListBinaryFormat_v1_0
                                                                  options:0
                                                                    error:&error];

    if (error != nil) {
        NSLog(@"Failed to serialize plist for NSBundle %@: %@", bundleIdentifierString, [error localizedDescription]);
        return nil;
    }

    // Create a 'bundle' on disk with following directory structure:
    // bundle/
    //      Info.plist
    //      Assets.car
    NSFileWrapper* bundleDirectory = [[NSFileWrapper alloc] initDirectoryWithFileWrappers:[NSDictionary new]];
    [bundleDirectory addRegularFileWithContents:plistData
                              preferredFilename:@"Info.plist"];

    [bundleDirectory addRegularFileWithContents:[[NSData alloc] initWithBytesNoCopy:bytes length:byteCount freeWhenDone:NO]
                              preferredFilename:@"Assets.car"];

    // Create a random directory inside the user's temporary directory
    NSString* bundlePath = [NSTemporaryDirectory() stringByAppendingPathComponent:[NSUUID UUID].UUIDString];

    // Write the bundle files
    BOOL result = [bundleDirectory writeToURL:[NSURL fileURLWithPath:bundlePath]
                                      options:0
                          originalContentsURL:nil
                                        error:&error];

    if (result == NO) {
        NSLog(@"Failed to write NSBundle %@: %@", bundleIdentifierString, [error localizedDescription]);
        return nil;
    }

    // Load the bundle we wrote to disk into an NSBundle
    //return [[NSBundle alloc] initWithPath:bundlePath];
    CFURLRef bundleURL = CFURLCreateWithFileSystemPath(kCFAllocatorDefault, (__bridge CFStringRef)bundlePath, kCFURLPOSIXPathStyle, true);
    CFBundleRef bundle = CFBundleCreate(kCFAllocatorDefault, bundleURL);
    CFRelease(bundleURL);

    // TODO: Release bundle
    return bundle;
}

EXPORT(void) UnityVisionOS_impl_ar_world_tracking_provider_set_anchor_update_handler(ar_world_tracking_provider_t world_tracking_provider, unity_ar_world_tracking_update_handler_t world_tracking_update_handler)
{
    ar_world_tracking_provider_set_anchor_update_handler(world_tracking_provider, nullptr, ^(ar_world_anchors_t added_anchors,
                                                                                             ar_world_anchors_t updated_anchors,
                                                                                             ar_world_anchors_t removed_anchors)
    {
        __block size_t added_anchor_count = ar_world_anchors_get_count(added_anchors);
        __block size_t enumerationCount = 0;
        tmp_added_anchors.clear();
        if (added_anchor_count > 0)
        {
            ar_world_anchors_enumerate_anchors(added_anchors, ^bool(ar_world_anchor_t  _Nonnull world_anchor)
            {
                tmp_added_anchors.push_back(world_anchor);
                return ++enumerationCount < added_anchor_count;
            });
        }

        __block size_t updated_anchor_count = ar_world_anchors_get_count(updated_anchors);
        enumerationCount = 0;
        tmp_updated_anchors.clear();
        if (updated_anchor_count > 0)
        {
            ar_world_anchors_enumerate_anchors(updated_anchors, ^bool(ar_world_anchor_t  _Nonnull world_anchor)
            {
                tmp_updated_anchors.push_back(world_anchor);
                return ++enumerationCount < updated_anchor_count;
            });
        }

        __block size_t removed_anchor_count = ar_world_anchors_get_count(removed_anchors);
        enumerationCount = 0;
        tmp_removed_anchors.clear();
        if (removed_anchor_count > 0)
        {
            ar_world_anchors_enumerate_anchors(removed_anchors, ^bool(ar_world_anchor_t  _Nonnull world_anchor)
            {
                tmp_removed_anchors.push_back(world_anchor);
                return ++enumerationCount < removed_anchor_count;
            });
        }

        world_tracking_update_handler(tmp_added_anchors.data(), (int)added_anchor_count, tmp_updated_anchors.data(), (int)updated_anchor_count, tmp_removed_anchors.data(), (int)removed_anchor_count);
    });
}

EXPORT(ar_world_anchor_t) UnityVisionOS_impl_ar_world_anchor_create_with_transform_float_array(float* transform)
{
    simd_float4x4 matrix;

    // TODO: Faster/cleaner conversion from float* to simd_float4x4
    matrix.columns[0][0] = transform[0];
    matrix.columns[0][1] = transform[1];
    matrix.columns[0][2] = transform[2];
    matrix.columns[0][3] = transform[3];
    matrix.columns[1][0] = transform[4];
    matrix.columns[1][1] = transform[5];
    matrix.columns[1][2] = transform[6];
    matrix.columns[1][3] = transform[7];
    matrix.columns[2][0] = transform[8];
    matrix.columns[2][1] = transform[9];
    matrix.columns[2][2] = transform[10];
    matrix.columns[2][3] = transform[11];
    matrix.columns[3][0] = transform[12];
    matrix.columns[3][1] = transform[13];
    matrix.columns[3][2] = transform[14];
    matrix.columns[3][3] = transform[15];

    return ar_world_anchor_create_with_origin_from_anchor_transform(matrix);
}

EXPORT(void) UnityVisionOS_impl_ar_world_tracking_provider_add_anchor(ar_world_tracking_provider_t world_tracking_provider,
    ar_world_anchor_t world_anchor, unity_ar_world_tracking_add_anchor_completion_handler_t add_anchor_completion_handler)
{
    ar_world_tracking_provider_add_anchor(world_tracking_provider, world_anchor, ^(ar_world_anchor_t world_anchor, bool successful, ar_error_t _Nullable error) {
        add_anchor_completion_handler(world_anchor, successful, error);
    });
}

EXPORT(void) UnityVisionOS_impl_ar_world_tracking_provider_remove_anchor_with_identifier(ar_world_tracking_provider_t world_tracking_provider,
    uuid_t anchor_identifier, unity_ar_world_tracking_remove_anchor_completion_handler_t remove_anchor_completion_handler)
{
    ar_world_tracking_provider_remove_anchor_with_identifier(world_tracking_provider, anchor_identifier, ^(ar_world_anchor_t world_anchor, bool successful, ar_error_t _Nullable error) {
        remove_anchor_completion_handler(world_anchor, successful, error);
    });
}

EXPORT(void) UnityVisionOS_impl_ar_authorization_results_enumerate_results(ar_authorization_results_t authorization_results,
    unity_authorization_results_enumeration_step_callback_t step, unity_authorization_results_enumeration_completed_callback_t completed)
{
    __block size_t result_count = ar_authorization_results_get_count(authorization_results);
    __block auto enumerationCount = 0;
    if (result_count > 0)
    {
        ar_authorization_results_enumerate_results(authorization_results, ^bool(ar_authorization_result_t authorization_result)
        {
            step(authorization_result);
            auto moveNext = ++enumerationCount < result_count;
            if (!moveNext)
                completed();

            return moveNext;
        });
    }
}

EXPORT(void) UnityVisionOS_SetIsImmersiveSpaceReady(bool immersiveSpaceReady)
{
    s_ImmersiveSpaceReady = immersiveSpaceReady;
}

EXPORT(bool) UnityVisionOS_IsImmersiveSpaceReady()
{
    return s_ImmersiveSpaceReady;
}

EXPORT(void) UnityVisionOS_SetUpInputEventHandler(unity_spatial_input_event_callback callback)
{
    s_OnInputEvent = callback;
}

EXPORT(void) UnityVisionOS_OnInputEvent(int eventCount, void* eventsPointer)
{
    if (s_OnInputEvent == nullptr)
    {
        NSLog(@"Error: Received an input event without callback being set.");
        return;
    }

    if (eventsPointer == nullptr)
    {
        NSLog(@"Error: Received null pointer for input events.");
        return;
    }

    s_OnInputEvent(eventCount, eventsPointer);
}
