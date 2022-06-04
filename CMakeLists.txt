cmake_minimum_required(VERSION 3.22)
project(ddi)

set(CMAKE_CXX_STANDARD 23)

add_executable(ddi main.cpp employee.cpp employee.h warehouse.cpp warehouse.h)
