// #if UNITY_IOS
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;
using System.IO;

namespace Klak.Ndi.Editor
{

    public class PbxModifier
    {
        [PostProcessBuild]
        public static void OnPostprocessBuild(BuildTarget buildTarget, string path)
        {
            ModifyProjectFile(path);
            ModifyPlistFile(path);
        }

        static void ModifyProjectFile(string basePath)
        {
            // Set visionOS project file path
            var path = Path.Combine(basePath, "Unity-VisionOS.xcodeproj", "project.pbxproj");

            if (!File.Exists(path))
            {
                throw new FileNotFoundException($"Xcode project file not found at path: {path}");
            }

            var proj = new PBXProject();
            proj.ReadFromFile(path);

            var target = proj.GetUnityFrameworkTargetGuid();
            // Set visionOS lib file path
            var libPath = "/Library/NDI\\ SDK\\ for\\ Apple/lib/visionOS";
            proj.AddBuildProperty(target, "LIBRARY_SEARCH_PATHS", libPath);
            proj.AddFrameworkToProject(target, "Accelerate.framework", false);
            proj.AddFrameworkToProject(target, "VideoToolbox.framework", false);
            // Set the libndi_visionos.a file name
            proj.AddFrameworkToProject(target, "libndi_visionos.a", false);

            proj.WriteToFile(path);
        }

        static void ModifyPlistFile(string basePath)
        {
            var path = Path.Combine(basePath, "Info.plist");

            var plist = new PlistDocument();
            plist.ReadFromFile(path);

            var root = plist.root;

            // Bonjour service list
            {
                var key = "NSBonjourServices";
                if (root.values.ContainsKey(key))
                    root.values[key].AsArray().AddString("_ndi._tcp");
                else
                    root.CreateArray(key).AddString("_ndi._tcp");
            }

            // LAN usage description
            {
                var key = "NSLocalNetworkUsageDescription";
                var desc = "NDI requires device discovery capability " +
                           "on the networks you use.";
                if (!root.values.ContainsKey(key)) root.SetString(key, desc);
            }

            plist.WriteToFile(path);
        }
    }

} // namespace Klak.Ndi.Editor

// #endif