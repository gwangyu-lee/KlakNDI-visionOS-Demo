import UnityFramework
import SwiftUI
import PolySpatialRealityKit

@_silgen_name("SetPolySpatialNativeAPIImplementation")
private func SetPolySpatialNativeAPIImplementation(_ api: UnsafeRawPointer, _ size: Int32)

class UnityPolySpatialAppDelegate: NSObject, UIApplicationDelegate, ObservableObject
{
    var unity: UnityLibrary

    private(set) public var bootConfig: [String: String]

    var uuidToScene: [UUID: UIScene] = [:]

    override init() {
        // read bootconfig
        bootConfig = .init()
        let bootconfigPath = Bundle.main.path(forResource: "Data/boot", ofType: "config")!
        let content = try! String(contentsOfFile: bootconfigPath, encoding: .ascii)
        for line in content.components(separatedBy: .newlines) {
            let parts = line.components(separatedBy: "=")
            if parts.count == 2 {
                bootConfig[parts[0]] = parts[1]
            }
        }

        unity = UnityLibrary.getInstance()!

        super.init()

        let api = PolySpatialRealityKitAccess.getApiData()
        let size = PolySpatialRealityKitAccess.getApiSize()
        SetPolySpatialNativeAPIImplementation(api, size)

        PolySpatialRealityKitAccess.register()
    }

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey : Any]? = nil) -> Bool {
        var arguments = CommandLine.arguments
        arguments.append("-batchmode")

        unity.run(arguments: arguments)

        return true
    }

    func applicationDidBecomeActive(_ application: UIApplication) {
    }

    func application(_ application: UIApplication, configurationForConnecting connectingSceneSession: UISceneSession, options: UIScene.ConnectionOptions) -> UISceneConfiguration {
        let configuration = connectingSceneSession.configuration
        configuration.delegateClass = PolySpatialRealityKit.PolySpatialSceneDelegate.self
        return configuration
    }

    private func application(_ application: UIApplication, didDiscardSceneSession: UISceneSession) {
    }
}
