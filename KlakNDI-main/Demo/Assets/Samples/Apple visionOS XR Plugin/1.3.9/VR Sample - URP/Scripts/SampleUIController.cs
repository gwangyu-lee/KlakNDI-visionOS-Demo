using System;
using UnityEngine;
using UnityEngine.UI;

#if UNITY_HAS_URP
using UnityEngine.Rendering.Universal;
#endif

namespace UnityEngine.XR.VisionOS.Samples.URP
{
    public class SampleUIController : MonoBehaviour
    {
        const string k_DisableSkyboxText = "Disable Skybox";
        const string k_EnableSkyboxText = "Enable Skybox";
        const string k_HandTrackingAuthorizationFormat = "Hand Tracking Authorization: {0}";
        const string k_WorldSensingAuthorizationFormat = "World Sensing Authorization: {0}";

#if UNITY_HAS_URP
        const string k_EnableHDRText = "Enable HDR";
        const string k_DisableHDRText = "Disable HDR";

        const string k_EnablePostProcessingText = "Enable Post Processing";
        const string k_DisablePostProcessingText = "Disable Post Processing";
#endif

        [SerializeField]
        ParticleSystem m_ParticleSystem;

        [SerializeField]
        Camera m_Camera;

        [SerializeField]
        Text m_SkyboxToggleText;

        [SerializeField]
        Text m_HDRToggleText;

        [SerializeField]
        Text m_PostProcessingToggleText;

        [SerializeField]
        Text m_HandTrackingAuthorizationText;

        [SerializeField]
        Text m_WorldSensingAuthorizationText;

        void Awake()
        {
            UpdateSkyboxToggleText();

#if UNITY_HAS_URP
            UpdateHDRText();
            UpdatePostProcessingText();
#endif

#if UNITY_VISIONOS || UNITY_EDITOR
            UpdateAuthorizationText();
#endif
        }

#if UNITY_VISIONOS || UNITY_EDITOR
        void OnEnable()
        {
            VisionOS.AuthorizationChanged += OnAuthorizationChanged;
        }

        void OnDisable()
        {
            VisionOS.AuthorizationChanged += OnAuthorizationChanged;
        }

        void UpdateAuthorizationText()
        {
            var type = VisionOSAuthorizationType.HandTracking;
            var status = VisionOS.QueryAuthorizationStatus(type);
            OnAuthorizationChanged(new VisionOSAuthorizationEventArgs { type = type, status = status });

            type = VisionOSAuthorizationType.WorldSensing;
            status = VisionOS.QueryAuthorizationStatus(type);
            OnAuthorizationChanged(new VisionOSAuthorizationEventArgs { type = type, status = status });
        }

        void OnAuthorizationChanged(VisionOSAuthorizationEventArgs args)
        {
            switch (args.type)
            {
                case VisionOSAuthorizationType.HandTracking:
                    m_HandTrackingAuthorizationText.text = string.Format(k_HandTrackingAuthorizationFormat, args.status);
                    break;
                case VisionOSAuthorizationType.WorldSensing:
                    m_WorldSensingAuthorizationText.text = string.Format(k_WorldSensingAuthorizationFormat, args.status);
                    break;
                // We do not support CameraAccess yet so ignore it
            }
        }
#endif

        public void SetParticleStartSpeed(float speed)
        {
            var mainModule = m_ParticleSystem.main;
            mainModule.simulationSpeed = speed;
        }

        public void ToggleSkybox()
        {
            if (m_Camera.clearFlags == CameraClearFlags.Skybox)
            {
                m_Camera.clearFlags = CameraClearFlags.Color;
                m_Camera.backgroundColor = Color.black;
            }
            else
            {
                m_Camera.clearFlags = CameraClearFlags.Skybox;
            }

            UpdateSkyboxToggleText();
        }

        void UpdateSkyboxToggleText()
        {
            m_SkyboxToggleText.text = m_Camera.clearFlags == CameraClearFlags.Skybox ? k_DisableSkyboxText : k_EnableSkyboxText;
        }

        public void ToggleHDR()
        {
#if UNITY_HAS_URP
            UniversalRenderPipeline.asset.supportsHDR = !UniversalRenderPipeline.asset.supportsHDR;
            var additionalCameraData = m_Camera.GetUniversalAdditionalCameraData();
            m_Camera.allowHDR = UniversalRenderPipeline.asset.supportsHDR;
            additionalCameraData.allowHDROutput = UniversalRenderPipeline.asset.supportsHDR;
            UpdateHDRText();
#endif
        }

        // TODO: LXR-4050 toggling post-processing results in head-locked rendering
        public void TogglePostProcessing()
        {
#if UNITY_HAS_URP
            var additionalCameraData = m_Camera.GetUniversalAdditionalCameraData();
            additionalCameraData.renderPostProcessing = !additionalCameraData.renderPostProcessing;
            UpdatePostProcessingText();
#endif
        }

#if UNITY_HAS_URP
        void UpdateHDRText()
        {
            m_HDRToggleText.text = UniversalRenderPipeline.asset.supportsHDR ? k_DisableHDRText : k_EnableHDRText;
        }

        void UpdatePostProcessingText()
        {
            m_PostProcessingToggleText.text = m_Camera.GetUniversalAdditionalCameraData().renderPostProcessing ? k_DisablePostProcessingText : k_EnablePostProcessingText;
        }
#endif
    }
}
