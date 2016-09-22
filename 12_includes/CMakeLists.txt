cmake_minimum_required(VERSION 3.5)
project(12_includes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c hello.h hello.c)
add_executable(12_includes ${SOURCE_FILES})