workspace("TrinityRay")
    architecture "x64"
    configurations { "Debug", "Release", "Dist" }
    startproject "RayForge"

-- Workspace-wide build options for MSVC
filter "system:windows"
   buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus" }

OutputDir = "%{cfg.system}-%{cfg.architecture}-%{cfg.buildcfg}"

group "Core"
 include "RayEngine/RayEngine.lua"
group ""

include "RayForge/RayForge.lua"