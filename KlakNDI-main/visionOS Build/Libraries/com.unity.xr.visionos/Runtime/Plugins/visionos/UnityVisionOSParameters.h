#ifndef UnityVisionOSParameters_h
#define UnityVisionOSParameters_h

// Replicate necessary structs for swift to access during setup.

typedef struct UnityXRVector3
{
    float x;
    float y;
    float z;
} UnityXRVector3;

typedef struct UnityXRVector4
{
    float x;
    float y;
    float z;
    float w;
} UnityXRVector4;

typedef struct UnityXRPose
{
    UnityXRVector3 position;
    UnityXRVector4 rotation;
} UnityXRPose;

typedef struct UnityXRProjectionHalfAngles
{
    float left;
    float right;
    float top;
    float bottom;
} UnityXRProjectionHalfAngles;

typedef struct DisplayProviderParameters
{
    int framebufferWidth;
    int framebufferHeight;
    UnityXRPose leftEyePose;
    UnityXRPose rightEyePose;
    UnityXRProjectionHalfAngles leftProjectionHalfAngles;
    UnityXRProjectionHalfAngles rightProjectionHalfAngles;
} DisplayProviderParameters;

const char * __nonnull DisplayProviderParametersObjCType() {
    return @encode(DisplayProviderParameters);
}

#endif 
