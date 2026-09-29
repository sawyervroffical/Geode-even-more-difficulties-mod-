cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 20)

project(EvenMoreDifficulties VERSION 1.0.0)

# If GEODE_SDK isn't found in the runner environment, download it automatically
if(NOT DEFINED ENV{GEODE_SDK})
    include(FetchContent)
    FetchContent_Declare(
        Geode
        GIT_REPOSITORY https://github.com/geode-sdk/geode.git
        GIT_TAG main
    )
    FetchContent_MakeAvailable(Geode)
else()
    list(APPEND CMAKE_PREFIX_PATH "$ENV{GEODE_SDK}")
    find_package(Geode REQUIRED)
endif()

add_geode_mod(
    ${PROJECT_NAME}
    SOURCES
        src/main.cpp
)
