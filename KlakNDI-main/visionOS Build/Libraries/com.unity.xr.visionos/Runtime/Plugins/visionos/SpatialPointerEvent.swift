import SwiftUI

struct SpatialPointerEvent {
    private var _interactionId: Int32
    private var _interactionRayOrigin: UnityVector3
    private var _interactionRayDirection: UnityVector3
    private var _inputDevicePosition: UnityVector3
    private var _inputDeviceRotation: UnityVector4
    private var _modifierKeys: UInt16
    private var _kind: UInt8
    private var _phase: UInt8

    init(interactionId: Int32, interactionRayOrigin: UnityVector3, interactionRayDirection: UnityVector3,
         inputDevicePosition: UnityVector3, inputDeviceRotation: UnityVector4, modifierKeys: UInt16,
         kind: UInt8, phase: UInt8) {
        _interactionId = interactionId
        _interactionRayOrigin = interactionRayOrigin
        _interactionRayDirection = interactionRayDirection
        _inputDevicePosition = inputDevicePosition
        _inputDeviceRotation = inputDeviceRotation
        _modifierKeys = modifierKeys
        _kind = kind
        _phase = phase
    }

    internal init() {
      _interactionId = 0
      _interactionRayOrigin = UnityVector3()
      _interactionRayDirection = UnityVector3()
      _inputDevicePosition = UnityVector3()
      _inputDeviceRotation = UnityVector4()
      _modifierKeys = 0
      _kind = 0
      _phase = 0
    }
}

func convertKindToUInt8(_ kind: SpatialEventCollection.Event.Kind) -> UInt8 {
    // VisionOSSpatialPointerKind values match SpatialEventCollection.Event.Kind 1:1
    switch kind {
    case .touch: return 0
    case .directPinch: return 1
    case .indirectPinch: return 2
    case .pointer: return 3
    @unknown default:
        return UInt8.max
    }
}

func converPhaseToUInt8(_ phase: SpatialEventCollection.Event.Phase, _ existingEvent: Bool) -> UInt8 {
    switch phase {
        // VisionOSSpatialPointerPhase.Began or VisionOSSpatialPointerPhase.Moved, based on whether there is an
        // existing event with the same id
    case .active: return existingEvent ? 2 : 1
        // VisionOSSpatialPointerPhase.Ended
    case .ended: return 3
        // VisionOSSpatialPointerPhase.Cancelled
    case .cancelled: return 4
        // VisionOSSpatialPointerPhase.None
    @unknown default:
        return 0
    }
}
