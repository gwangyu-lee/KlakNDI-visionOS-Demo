#include <metal_stdlib>

using namespace metal;

// This file contains the compute shaders used to process image based lighting (IBL) textures,
// converting them from Unity to RealityKit format, as well as the compute shaders used to
// perform blend shape blending.

kernel void copyBlendShapeBuffer(
    device const simd_float3* src [[buffer(0)]],
    device simd_float3* dest [[buffer(1)]],
    device const uint& size [[buffer(2)]],
    uint index [[thread_position_in_grid]])
{
    if (index < size)
        dest[index] = src[index];
}

kernel void addScaledBlendShapeBuffer(
    device const simd_float3* src [[buffer(0)]],
    device const float& scale [[buffer(1)]],
    device simd_float3* dest [[buffer(2)]],
    device const uint& size [[buffer(3)]],
    uint index [[thread_position_in_grid]])
{
    if (index < size)
        dest[index] += src[index] * scale;
}

kernel void normalizeBlendShapeBuffer(
    device simd_float3* dest [[buffer(0)]],
    device const uint& size [[buffer(1)]],
    uint index [[thread_position_in_grid]])
{
    if (index < size)
        dest[index] = normalize(dest[index]);
}

// A compute shader that simply flips in the input vertically and writes it to the output
// (necessary because the CGImage constructor expects data with a lower-left origin).
kernel void textureFlipVertical(
    texture2d<half, access::read> inTexture [[texture(0)]],
    texture2d<half, access::write> outTexture [[texture(1)]],
    uint2 gid [[thread_position_in_grid]])
{
    if (gid.x < outTexture.get_width() && gid.y < outTexture.get_height())
        outTexture.write(inTexture.read(uint2(gid.x, inTexture.get_height() - gid.y - 1)), gid);
}

float2 getZFaceCoord(float3 dir)
{
    if (dir.z > 0)
        return dir.xy * float2(0.5, -0.5 / 6.0) + float2(0.5, 4.5 / 6.0);
    else
        return dir.xy * float2(-0.5, -0.5 / 6.0) + float2(0.5, 5.5 / 6.0);
}

// A compute shader that converts a cube map stored as a 2D texture (which we use to emulate cube maps in
// shader graphs, since RealityKit lacks direct support for cube maps) to the equirectangular (that is,
// latitude/longitude) format required by the EnvironmentResource constructor.
kernel void textureCubeToEquirectangular(
    texture2d<half, access::sample> inTexture [[texture(0)]],
    texture2d<half, access::write> outTexture [[texture(1)]],
    uint2 gid [[thread_position_in_grid]])
{
    if (gid.x >= outTexture.get_width() || gid.y >= outTexture.get_height()) {
        return;
    }

    // Convert grid position to lat/long.
    float latitude = gid.x * 2 * M_PI_F / outTexture.get_width();
    float longitude = gid.y * M_PI_F / outTexture.get_height();

    // Convert lat/long to unit direction.
    float sinLongitude = sin(longitude);
    float3 dir = float3(-sinLongitude * sin(latitude), cos(longitude), -sinLongitude * cos(latitude));
    
    // Set coords based on cube map face.
    float2 coord;
    float3 absdir = abs(dir);
    if (absdir.x > absdir.y)
    {
        if (absdir.x > absdir.z) // +X/-X
        {
            if (dir.x > 0)
                coord = dir.zy * float2(-0.5, -0.5 / 6.0) + float2(0.5, 0.5 / 6.0);
            else
                coord = dir.zy * float2(0.5, -0.5 / 6.0) + float2(0.5, 1.5 / 6.0);
        }
        else // +Z/-Z
        {
            coord = getZFaceCoord(dir);
        }
    }
    else if (absdir.y > absdir.z) // +Y/-Y
    {
        if (dir.y > 0)
            coord = dir.xz * float2(0.5, 0.5 / 6.0) + float2(0.5, 2.5 / 6.0);
        else
            coord = dir.xz * float2(0.5, -0.5 / 6.0) + float2(0.5, 3.5 / 6.0);
    }
    else // +Z/-Z
    {
        coord = getZFaceCoord(dir);
    }
    
    constexpr sampler textureSampler(mag_filter::linear, min_filter::linear);
    outTexture.write(inTexture.sample(textureSampler, coord), gid);
}
