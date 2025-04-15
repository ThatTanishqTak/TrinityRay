project "RayEngine"
   kind "StaticLib"
   language "C++"
   cppdialect "C++20"
   targetdir "bin/%{cfg.buildcfg}"
   staticruntime "off"

   files { "src/**.h", "src/**.cpp" }

   includedirs
   {
      "src",
      "vendor/raylib/include",
      "vendor/raygui/src"
   }

   defines
   { 
      "RAYGUI_IMPLEMENTATION",
      "_CRT_SECURE_NO_WARNINGS"
   }

   links
   {
      "vendor/raylib/lib/raylib.lib"
   }

   targetdir ("../bin/" .. OutputDir .. "/%{prj.name}")
   objdir ("../bin-int/" .. OutputDir .. "/%{prj.name}")

   filter "system:windows"
       systemversion "latest"
       defines { }
       --links { }

   filter "configurations:Debug"
       defines { "DEBUG" }
       runtime "Debug"
       symbols "On"

   filter "configurations:Release"
       defines { "RELEASE" }
       runtime "Release"
       optimize "On"
       symbols "On"

   filter "configurations:Dist"
       defines { "DIST" }
       runtime "Release"
       optimize "On"
       symbols "Off"