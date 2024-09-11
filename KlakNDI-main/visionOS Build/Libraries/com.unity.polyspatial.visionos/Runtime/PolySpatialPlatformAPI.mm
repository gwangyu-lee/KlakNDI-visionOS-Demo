#import <Foundation/Foundation.h>

#define EXPORTED_SYMBOL __attribute__((visibility("default")))  __attribute__((__used__))

extern "C" {

static void *g_api = NULL;
static int g_api_size = 0;

// see PolySpatialRealityKitAccess.swift
void EXPORTED_SYMBOL SetPolySpatialNativeAPIImplementation(const void* api, int size)
{
    g_api = malloc(size);
    g_api_size = size;
    memcpy(g_api, api, size);
}

void EXPORTED_SYMBOL GetPolySpatialNativeAPI(void* api)
{
    // TODO size check
    memcpy(api, g_api, g_api_size);
}

} // extern "C"
