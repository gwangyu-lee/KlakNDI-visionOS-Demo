import simd.vector_types

// swiftlint:disable identifier_name
struct UnityVector3 {
    private var _x: Float
    private var _y: Float
    private var _z: Float

    internal init(x: Float, y: Float, z: Float) {
        _x = x
        _y = y
        _z = z
    }

    internal init() {
        _x = 0
        _y = 0
        _z = 0
    }
}

struct UnityVector4 {
    private var _x: Float
    private var _y: Float
    private var _z: Float
    private var _w: Float

    internal init(x: Float, y: Float, z: Float, w: Float) {
        _x = x
        _y = y
        _z = z
        _w = w
    }

    internal init() {
        _x = 0
        _y = 0
        _z = 0
        _w = 0
    }
}
// swiftlint:enable identifier_name

func convertDouble3PositionToUnityVector3(_ position: simd_double3) -> UnityVector3 {
    // Flip the Z-coordinate to go between ARKit and Unity worldspaces.
    return UnityVector3(x: Float(position.x), y: Float(position.y), z: -Float(position.z))
}

func convertDouble4RotationToUnityVector4(_ rotation: simd_double4) -> UnityVector4 {
    // Flip the Z-coordinate and W-coordinate to go between ARKit and Unity worldspaces.
    return UnityVector4(x: Float(rotation.x), y: Float(rotation.y), z: -Float(rotation.z), w: -Float(rotation.w))
}
