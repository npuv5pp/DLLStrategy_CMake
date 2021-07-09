cmake_minimum_required(VERSION 3.5)
project(DLLStrategy VERSION 1.0 LANGUAGES CXX)
include_directories(DLLStrategy)
set(CMAKE_CXX_STANDARD 11)
set(SOURCES
    DLLStrategy.cpp)
add_library(DLLStrategy SHARED
    ${SOURCES})