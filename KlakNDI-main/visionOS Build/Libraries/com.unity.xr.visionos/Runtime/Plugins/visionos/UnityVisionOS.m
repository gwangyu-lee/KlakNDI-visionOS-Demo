#import <Foundation/Foundation.h>
#include "IUnityInterface.h"
#include "UnityVisionOSParameters.h"
#import <CompositorServices/CompositorServices.h>

#define EXPORT(RETURN_TYPE) RETURN_TYPE __attribute__ ((visibility("default")))  __attribute__((__used__))

#ifdef __cplusplus
extern "C" {
#endif

void UNITY_INTERFACE_EXPORT UNITY_INTERFACE_API UnityPluginLoad(IUnityInterfaces* unityInterfaces);

void ObjC_SetDisplayProviderParameters(void* parameters);

#ifdef __cplusplus
} // extern "C"
#endif

@interface UnityVisionOS : NSObject

+ (void)loadPlugin;

+ (void)setDisplayProviderParameters:(NSValue*)parameters;

@end

@implementation UnityVisionOS

+ (void)loadPlugin
{
    UnityRegisterRenderingPluginV5(UnityPluginLoad, NULL);
}

+ (void)setDisplayProviderParameters:(NSValue*)parameters
{
    DisplayProviderParameters params;
    [parameters getValue:&params size:sizeof(DisplayProviderParameters)];
    ObjC_SetDisplayProviderParameters(&params);
}

@end
