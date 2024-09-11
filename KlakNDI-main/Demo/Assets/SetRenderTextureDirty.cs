using UnityEngine;
using Unity.PolySpatial;

public class SetRenderTextureDirty : MonoBehaviour
{
    public RenderTexture texture;

    void Update()
    {
        Unity.PolySpatial.PolySpatialObjectUtils.MarkDirty(texture);
    }
}