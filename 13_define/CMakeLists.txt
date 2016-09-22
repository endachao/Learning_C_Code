cmake_minimum_required(VERSION 3.5)
project(13_define)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c)
add_executable(13_define ${SOURCE_FILES})