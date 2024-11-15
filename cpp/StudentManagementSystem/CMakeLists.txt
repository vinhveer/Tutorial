cmake_minimum_required(VERSION 3.29)
project(StudentManagementSystem)

set(CMAKE_CXX_STANDARD 11)

add_executable(StudentManagementSystem main.cpp
        Student.h
        StudentManagement.h
        Student.cpp
        StudentManagement.cpp)
