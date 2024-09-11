import Foundation
import UnityFramework

class UnityLibrary: UIResponder, UIApplicationDelegate, UnityFrameworkListener {

    public static var instance: UnityLibrary?

    private let unityFramework: UnityFramework

    public var view: UIView? {
        return self.unityFramework.appController()?.rootView
    }

    /// Used to invoke the system keyboard
    public var keyboardTextField: UITextField? {
        return self.unityFramework.keyboardTextField()
    }

    public static func getInstance() -> UnityLibrary? {
        if UnityLibrary.instance == nil {
            UnityLibrary.instance = UnityLibrary()
        }

        return UnityLibrary.instance!
    }

    private static func loadUnityFramework() -> UnityFramework? {
        let bundlePath = Bundle.main.bundlePath + "/Frameworks/UnityFramework.framework"
        let bundle = Bundle(path: bundlePath)
        if bundle?.isLoaded == false {
            bundle?.load()
        }

        let unityFramework = bundle?.principalClass?.getInstance()
        if unityFramework?.appController() == nil {
            // Mach0 Machine header is used by crash reporting API to get app metadata. It is important that the pointer sent to
            // UnityFramework has the same address as _mh_execute_header. Refer to the following header for more information:
            // https://opensource.apple.com/source/xnu/xnu-2050.18.24/EXTERNAL_HEADERS/mach-o/loader.h
            let machineHeader = dlsym(dlopen(nil, RTLD_LAZY), MH_EXECUTE_SYM)
            if machineHeader != nil {
                let typedPointer = machineHeader!.assumingMemoryBound(to: MachHeader.self)
                unityFramework!.setExecuteHeader(typedPointer)
            } else {
                print("Error: Could not find a valid pointer for Mach0 Machine Header. Crash reporting may not work.")
            }
        }

        return unityFramework
    }

    internal override init() {
        self.unityFramework = UnityLibrary.loadUnityFramework()!
        self.unityFramework.setDataBundleId(Bundle.main.bundleIdentifier)

        super.init()

        self.unityFramework.register(self)
    }

    public func run(arguments: [String]) {

        // Passing to Unity requires re-creating the standard argv array.
        let argv = UnsafeMutablePointer<UnsafeMutablePointer<Int8>?>.allocate(capacity: arguments.count)

        for index in 0..<arguments.count {
            if let copy = strdup(arguments[index]) {
                argv[index] = copy
            }
        }

        unityFramework.runEmbedded(withArgc: Int32(arguments.count), argv: argv, appLaunchOpts: nil)
    }

    public func show() {
        self.unityFramework.showUnityWindow()
    }

    public func show(controller: UIViewController) {
        self.unityFramework.showUnityWindow()
        if let view = self.view {
            controller.view?.addSubview(view)
        }
    }

    public func unload() {
        self.unityFramework.unloadApplication()
    }

    internal func unityDidUnload(_ notification: Notification!) {
        unityFramework.unregisterFrameworkListener(self)
        UnityLibrary.instance = nil
    }

    public func setAbsoluteUrl(_ url: String) {
        let selector = Selector(("setAbsoluteURL:"))
        if unityFramework.responds(to: selector) {
            url.withCString({
              let methodIMP: IMP! = unityFramework.method(for: selector)
                 unsafeBitCast(methodIMP, to:
                    (@convention(c)(Any?, Selector, UnsafeRawPointer) -> Void).self)(unityFramework, selector, $0)
            })
        }
    }

    public func didBecomeActive() {
        unityFramework.appController().applicationDidBecomeActive(UIApplication.shared)
    }

    public func willResignActive() {
        unityFramework.appController().applicationWillResignActive(UIApplication.shared)
    }

    public func didEnterBackground() {
        unityFramework.appController().applicationDidEnterBackground(UIApplication.shared)
    }

    public func willEnterForeground() {
        unityFramework.appController().applicationWillEnterForeground(UIApplication.shared)
    }
}
