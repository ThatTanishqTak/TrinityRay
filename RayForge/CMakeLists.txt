# RayForge's CMake

cmake_minimum_required(VERSION 3.20)
project(RayForge)

file(GLOB_RECURSE SOURCES "src/*.h" "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE RayEngine)
target_include_directories(${PROJECT_NAME} PUBLIC 
    "${CMAKE_SOURCE_DIR}/RayEngine/src"
    "${CMAKE_SOURCE_DIR}/RayForge/src")

set_target_properties(${PROJECT_NAME} PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${BINARY_OUTPUT_DIR}"
    LIBRARY_OUTPUT_DIRECTORY "${BINARY_OUTPUT_DIR}"
    RUNTIME_OUTPUT_DIRECTORY "${BINARY_OUTPUT_DIR}"
    OBJECT_OUTPUT_DIRECTORY "${INTERMEDIATE_OUTPUT_DIR}"
)