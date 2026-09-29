cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 20)

project(EvenMoreDifficulties VERSION 1.0.0)

# Check all possible locations where build-geode-mod installs the SDK
if(NOT DEFINED Geode_DIR)
    if(DEFINED ENV{GEODE_SDK})
        set(Geode_DIR "$ENV{GEODE_SDK}")
    elseif(EXISTS "${CMAKE_SOURCE_DIR}/geode")
        set(Geode_DIR "${CMAKE_SOURCE_DIR}/geode")
    else()
        set(Geode_DIR "/home/runner/work/geode")
    endif()
endif()

list(APPEND CMAKE_PREFIX_PATH "${Geode_DIR}")

find_package(Geode REQUIRED)

add_geode_mod(
    ${PROJECT_NAME}
    SOURCES
        src/main.cpp
)
