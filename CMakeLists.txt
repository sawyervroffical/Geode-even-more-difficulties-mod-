cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 20)

project(EvenMoreDifficulties VERSION 1.0.0)

# 1. Search GEODE_SDK environment variable if defined
if(DEFINED ENV{GEODE_SDK})
    list(APPEND CMAKE_PREFIX_PATH "$ENV{GEODE_SDK}")
endif()

# 2. Search GitHub Actions runner default workspace paths
if(EXISTS "$ENV{GITHUB_WORKSPACE}/geode")
    list(APPEND CMAKE_PREFIX_PATH "$ENV{GITHUB_WORKSPACE}/geode")
endif()

# 3. Locate Geode SDK package
find_package(Geode REQUIRED)

# 4. Declare Geode Mod source target
add_geode_mod(
    ${PROJECT_NAME}
    SOURCES
        src/main.cpp
)
