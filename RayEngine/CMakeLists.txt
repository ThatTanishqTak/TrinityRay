# RayEngine's CMake

cmake_minimum_required(VERSION 3.20)
project(RayEngine)

file(GLOB_RECURSE SOURCES "src/*.h" "src/*.cpp")

add_library(${PROJECT_NAME} STATIC ${SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE 
    "${CMAKE_SOURCE_DIR}/RayEngine/vendor/raylib/lib/raylib.lib")

set_target_properties(${PROJECT_NAME} PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${BINARY_OUTPUT_DIR}"
    LIBRARY_OUTPUT_DIRECTORY "${BINARY_OUTPUT_DIR}"
    RUNTIME_OUTPUT_DIRECTORY "${BINARY_OUTPUT_DIR}"
    OBJECT_OUTPUT_DIRECTORY "${INTERMEDIATE_OUTPUT_DIR}"
)

target_include_directories(${PROJECT_NAME} PUBLIC 
    "${CMAKE_SOURCE_DIR}/RayEngine/vendor/raylib/include"
    "${CMAKE_SOURCE_DIR}/RayEngine/vendor/raygui/src")

target_link_libraries(${PROJECT_NAME} PRIVATE "winmm.lib")
target_link_libraries(${PROJECT_NAME} PRIVATE "opengl32.lib")