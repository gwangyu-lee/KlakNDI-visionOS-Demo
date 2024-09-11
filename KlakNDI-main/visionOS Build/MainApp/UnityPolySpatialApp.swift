import SwiftUI
import PolySpatialRealityKit
import RealityKit
typealias Scene = SwiftUI.Scene

@_silgen_name("UnityVisionOS_SetIsImmersiveSpaceReady")
private func UnityVisionOS_SetIsImmersiveSpaceReady(_ immersiveSpaceReady: Bool)

@main
struct UnityPolySpatialApp: App, PolySpatialWindowManagerDelegate {
    @UIApplicationDelegateAdaptor
    var delegate: UnityPolySpatialAppDelegate

    @Environment(\.openWindow) var openWindow
    @Environment(\.dismissWindow) var dismissWindow
    @Environment(\.openImmersiveSpace) var openImmersiveSpace
    @Environment(\.dismissImmersiveSpace) var dismissImmersiveSpace

    init() {
        PolySpatialWindowManagerAccess.delegate = self

        let _ = UnityLibrary.getInstance()
        let unityClass = NSClassFromString("UnityVisionOS") as? NSObject.Type
        var parameters = displayProviderParameters()
        let value = NSValue(bytes: &parameters, objCType: DisplayProviderParametersObjCType())
        unityClass?.perform(Selector(("setDisplayProviderParameters:")), with: value)
    }

    var body: some Scene {
        mainScene
    }

    func requestOpenWindow(_ config: String) {
        Task {
            if config == "Unbounded" {
                await openImmersiveSpace(id: config)
            } else {
                openWindow(id: config)
            }
        }
    }

    func requestDismissWindow(_ window: PolySpatialWindow, _ session: UISceneSession?) {
        // dismissWindow doesn't seem to function as expected; but the else
        // code below should be what we can do and avoid all the SceneSession goop
        #if true
        UIApplication.shared.requestSceneSessionDestruction(session!, options: nil)
        #else
        let config = window.windowConfiguration
        Task {
            if config == "Unbounded" {
                await dismissImmersiveSpace()
            } else {
                dismissWindow(value: window.uuid)
            }
        }
        #endif
    }

    func onWindowAdded(_ window: PolySpatialWindow) {
        if window.windowConfiguration == "Unbounded" {
            // Hook to let ARKit know to set things up
            UnityVisionOS_SetIsImmersiveSpaceReady(true)
        }
    }

    func onWindowRemoved(_ window: PolySpatialWindow) {
    }

    func reset() {
    }
}

// Wrapper around TextField in UnityFramework which is used to pop up the keyboard.
// This reference must be grabbed from UnityFramework and added into SwiftUI on
// Vision OS in order for it to register and pop up the keyboard.
struct KeyboardTextField: UIViewRepresentable {
    func makeUIView(context: Context) -> UITextField {
        let textField = UnityLibrary.getInstance()!.keyboardTextField!
        textField.isHidden = true
        textField.translatesAutoresizingMaskIntoConstraints = false
        return textField
    }

    func updateUIView(_ uiView: UITextField, context: Context) {
    }
}
