cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 20)

project(EvenMoreDifficulties VERSION 1.0.0)

# This line tells CMake where the Geode SDK macros live:
include($ENV{GEODE_SDK}/share/geode/cmake/GeodeFile.cmake)

find_package(Geode REQUIRED)

add_geode_mod(
    ${PROJECT_NAME}
    SOURCES
        src/main.cpp
)
