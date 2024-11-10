cmake_minimum_required(VERSION 3.29)
project(Employee)

set(CMAKE_CXX_STANDARD 11)

add_executable(Employee main.cpp
        Department.h
        Department.cpp
        Employee.cpp
        Employee.h)
