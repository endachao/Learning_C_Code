cmake_minimum_required(VERSION 3.5)
project(04_chars)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c)
add_executable(04_chars ${SOURCE_FILES})