cmake_minimum_required(VERSION 3.10)

if (POLICY CMP0025)
cmake_policy(SET CMP0025 NEW)
endif ()

# set the project name and version
project(SortingAlgo)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB SOURCES "src/*.cpp")

include_directories(include)

add_executable(main ${SOURCES})

