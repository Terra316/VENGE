cmake_minimum_required(VERSION 3.19)
project(VENGE VERSION 0.1)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED 17)

# Core src
add_subdirectory(Engine-Core)

# API Testing
add_subdirectory(Testing)

# Editor src
add_subdirectory(Engine-Editor)

# Dependency sources
add_subdirectory(Dependencies/glfw)