cmake_minimum_required(VERSION 3.5)
project(10_string)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c)
add_executable(10_string ${SOURCE_FILES})