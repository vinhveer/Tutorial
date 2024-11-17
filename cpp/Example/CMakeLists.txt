cmake_minimum_required(VERSION 3.29)
project(Example)

set(CMAKE_CXX_STANDARD 11)

add_executable(Example main.cpp
        Employee.h
        Employee.cpp)
