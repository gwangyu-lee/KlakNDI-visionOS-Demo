import SwiftUI

class UnitySwiftUISceneDelegate: UIResponder, UISceneDelegate {
    var unity: UnityLibrary

    override init() {
        unity = UnityLibrary.getInstance()!

        super.init()
    }

    func sceneDidBecomeActive(_ scene: UIScene) {
        unity.didBecomeActive()
    }

    func sceneWillResignActive(_ scene: UIScene) {
        unity.willResignActive()
    }

    func sceneDidEnterBackground(_ scene: UIScene) {
        unity.didEnterBackground()
    }

    func sceneWillEnterForeground(_ scene: UIScene) {
        unity.willEnterForeground()
    }
}
