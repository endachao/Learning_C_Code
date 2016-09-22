cmake_minimum_required(VERSION 3.5)
project(05_typedef)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c)
add_executable(05_typedef ${SOURCE_FILES})