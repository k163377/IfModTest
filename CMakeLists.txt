cmake_minimum_required(VERSION 3.7.2)
project(IfModTest)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-Wall -O3")

set(SOURCE_FILES main.cpp)
add_executable(IfModTest ${SOURCE_FILES})