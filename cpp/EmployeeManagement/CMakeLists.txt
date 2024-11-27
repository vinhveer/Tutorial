cmake_minimum_required(VERSION 3.29)
project(EmployeeManagement)

set(CMAKE_CXX_STANDARD 11)

add_executable(EmployeeManagement main.cpp
        Employee.cpp
        Employee.h
        Manager.cpp
        Manager.h
        Developer.cpp
        Developer.h)
