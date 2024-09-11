import CompositorServices
import SwiftUI

struct UnityCompositorServicesConfiguration: CompositorLayerConfiguration {
    let singlePass: Bool
    let enableFoveation: Bool
    let useHDR: Int

    func makeConfiguration(capabilities: LayerRenderer.Capabilities, configuration: inout LayerRenderer.Configuration) {
        configuration.colorFormat = useHDR == 0 ? .rgba8Unorm_srgb : .rgba16Float
        configuration.depthFormat = .depth32Float_stencil8
        if singlePass == true {
            configuration.layout = .layered
        } else {
            configuration.layout = .dedicated
        }

        configuration.isFoveationEnabled = enableFoveation
        configuration.generateFlippedRasterizationRateMaps = enableFoveation
    }
}
