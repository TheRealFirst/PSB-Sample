# PSB-Sample/CMakeLists.txt
cmake_minimum_required(VERSION 3.20)
project(PSB-Sample LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add your engine as a submodule
add_subdirectory(dependencies/PSB)

# Collect all sample source files
file(GLOB_RECURSE SAMPLE_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.h"
)

# Create the executable
add_executable(PSB-Sample ${SAMPLE_SOURCES})

# Link the engine
target_link_libraries(PSB-Sample PRIVATE PSB)

# Optional: add include directory for your own headers if you have any
target_include_directories(PSB-Sample
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)