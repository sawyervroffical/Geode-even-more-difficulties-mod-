cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 20)

project(EvenMoreDifficulties VERSION 1.0.0)

find_package(Geode REQUIRED)

add_geode_mod(
    ${PROJECT_NAME}
    SOURCES
        src/main.cpp
)
