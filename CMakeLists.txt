cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 20)

project(EvenMoreDifficulties VERSION 1.0.0)

# Force CMake to check the Geode SDK path for GeodeConfig.cmake
if(DEFINED ENV{GEODE_SDK})
    list(APPEND CMAKE_PREFIX_PATH "$ENV{GEODE_SDK}")
endif()

find_package(Geode REQUIRED)

add_geode_mod(
    ${PROJECT_NAME}
    SOURCES
        src/main.cpp
)
(VERSION 3.13)
set(CMAKE_CXX_STANDARD 20)

project(EvenMoreDifficulties VERSION 1.0.0)

find_package(Geode REQUIRED)

add_geode_mod(
    ${PROJECT_NAME}
    SOURCES
        src/main.cpp
)
