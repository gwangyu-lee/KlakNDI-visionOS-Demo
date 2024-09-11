import CompositorServices
import SwiftUI

let maxPointers = 2
var currentEvents: Set<SpatialEventCollection.Event.ID> = .init()
var existingEvents: [SpatialEventCollection.Event.ID: Bool] = .init()
var existingIndices: [SpatialEventCollection.Event.ID: Int32] = .init()
var spatialPointerEvents: [SpatialPointerEvent] = .init(repeating: .init(), count: maxPointers)

#if targetEnvironment(simulator)
let singlePass = false
#else
let singlePass = true
#endif

@_silgen_name("UnityVisionOS_OnInputEvent")
private func onInputEvent(_ eventCount: Int32, _ eventsPointer: UnsafePointer<SpatialPointerEvent>?)

@_silgen_name("UnityVisionOS_SetIsImmersiveSpaceReady")
private func setIsImmersiveSpaceReady(_ immersiveSpaceReady: Bool)

@_silgen_name("UnityVisionOS_SetLayerRenderer")
private func setLayerRenderer(_ layerRenderer: LayerRenderer)

@SceneBuilder
var unityVisionOSCompositorSpace: some Scene {
    ImmersiveSpace(id: "CompositorSpace") {
        // swiftlint:disable:next redundant_discardable_let
        let _ = UnityLibrary.getInstance()
        let settingsBridge = NSClassFromString("UnityVisionOSSettingsBridge") as? NSObject.Type
        let useHDR = settingsBridge?.perform(Selector(("getUseHDR")))?.takeUnretainedValue() as? NSNumber

        let configuration = UnityCompositorServicesConfiguration(
            singlePass: singlePass,
            enableFoveation: VisionOSEnableFoveation,
            useHDR: useHDR?.intValue ?? 0)

        CompositorLayer(configuration: configuration) { layerRenderer in
            let compositorBridge = NSClassFromString("UnityVisionOSCompositorBridge") as? NSObject.Type
            compositorBridge?.perform(Selector(("setLayerRenderer:")), with: layerRenderer)
            settingsBridge?.perform(Selector(("setFoveatedRenderingEnabled:")), with: VisionOSEnableFoveation)

            setIsImmersiveSpaceReady(true)
            setLayerRenderer(layerRenderer)

            layerRenderer.onSpatialEvent = { eventCollection in
                var count = 0
                // Clear out existing state for events which are no longer being tracked
                currentEvents.removeAll()
                for event in eventCollection {
                    currentEvents.insert(event.id)
                }

                existingEvents = existingEvents.filter { currentEvents.contains($0.key) }
                existingIndices = existingIndices.filter { currentEvents.contains($0.key) }

                for event in eventCollection {
                    if count > 1 {
                        break
                    }

                    let pose = event.inputDevicePose
                    let ray = event.selectionRay
                    if pose == nil || ray == nil {
                        continue
                    }

                    if existingIndices[event.id] == nil {
                        var newIndex = 0
                        var foundIndex = true
                        while foundIndex {
                            foundIndex = false
                            for (_, index) in existingIndices where index == newIndex {
                                newIndex += 1
                                foundIndex = true
                            }
                        }

                        existingIndices[event.id] = Int32(newIndex)
                    }

                    let existingEvent = existingEvents[event.id] ?? false
                    let phase = event.phase
                    let pose3D = pose!.pose3D
                    let sendPointerEvent: SpatialPointerEvent = .init(
                        interactionId: existingIndices[event.id]!,
                        interactionRayOrigin: convertDouble3PositionToUnityVector3(ray!.origin.vector),
                        interactionRayDirection: convertDouble3PositionToUnityVector3(ray!.direction.vector),
                        inputDevicePosition: convertDouble3PositionToUnityVector3(pose3D.position.vector),
                        inputDeviceRotation: convertDouble4RotationToUnityVector4(pose3D.rotation.vector),
                        modifierKeys: UInt16(event.modifierKeys.rawValue),
                        kind: convertKindToUInt8(event.kind),
                        phase: converPhaseToUInt8(event.phase, existingEvent)
                    )

                    existingEvents[event.id] = phase == .active
                    spatialPointerEvents[count] = sendPointerEvent
                    count += 1
                }

                let events = [SpatialPointerEvent].init(spatialPointerEvents[0..<count])
                _ = events.withUnsafeBufferPointer { buffer in
                    onInputEvent(Int32(count), buffer.baseAddress)
                }
            }
        }
    }.immersionStyle(selection: .constant(VisionOSImmersionStyle), in: VisionOSImmersionStyle)
        .upperLimbVisibility(VisionOSUpperLimbVisibility)
}
