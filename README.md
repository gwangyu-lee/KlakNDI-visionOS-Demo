# KlakNDI visionOS Demo


### Build settings
Switch to the visionOS platform    
Target SDK: Device SDK    

### Packages
com.unity.xr.visionos    
com.unity.polyspatial    
com.unity.polyspatial.visionos    
com.unity.polyspatial.xr    

### Project Settings
XR Plug-in manager - Plug-in Providers - Check Apple visionOS    
Apple visionOS - App mode - Mixed Reality    
Apple visionOS - world sensing usage description - need it for sensing    
Apple visionOS - hands tracking usage description - need it for sensing    
Project Validation - fix all    

### Add visionOS platform to Klak.Ndi.Runtime.asmdef
Go to `Packages/jp.keijiro.klak.ndi/Runtime/Klak.Ndi.Runtime.asmdef`. Check visionOS and apply.    
Or edit the script    

Klak.Ndi.Runtime.asmdef
```
{
    "name": "Klak.Ndi.Runtime",
    "rootNamespace": "",
    "references": [
        "GUID:df380645f10b7bc4b97d4f5eb6303d95"
    ],
    "includePlatforms": [
        "Android",
        "Editor",
        "iOS",
        "visionOS",
        "LinuxStandalone64",
        "macOSStandalone",
        "WindowsStandalone64"
    ],
    "excludePlatforms": [],
    "allowUnsafeCode": true,
    "overrideReferences": false,
    "precompiledReferences": [],
    "autoReferenced": true,
    "defineConstraints": [],
    "versionDefines": [
        {
            "name": "com.unity.render-pipelines.core",
            "expression": "0.0.0",
            "define": "KLAK_NDI_HAS_SRP"
        }
    ],
    "noEngineReferences": false
}
```

### Copy iOS NDI SDK
1. Make a `visionOS` folder in `/Library/NDI SDK for Apple/lib/`. Copy and paste `libndi_ios.a` into the folder. And change the name to `libndi_visionos.a`
<img width="976" alt="Screenshot 2024-08-24 at 2 16 27 AM" src="https://github.com/user-attachments/assets/002f17d4-c29e-413a-b99e-d8836f4920eb">

2. Use the UnityEditor.iOS.Xcode but edit the path manually.

PbxModifier.cs
```cs
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
```

