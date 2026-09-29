cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 20)

project(EvenMoreDifficulties VERSION 1.0.0)

# Load Geode CLI cmake setup so find_package knows where Geode is
include($ENV{GEODE_SDK}/share/geode/cmake/GeodeFile.cmake OPTIONAL)
list(APPEND CMAKE_PREFIX_PATH "$ENV{GEODE_SDK}")

find_package(Geode REQUIRED)

add_geode_mod(
    ${PROJECT_NAME}
    SOURCES
        src/main.cpp
)

