cmake_minimum_required(VERSION 3.5)
project(09_array)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c)
add_executable(09_array ${SOURCE_FILES})