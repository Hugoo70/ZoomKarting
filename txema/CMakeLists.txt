cmake_minimum_required(VERSION 3.27)
project(txema C)

set(CMAKE_C_STANDARD 11)

add_executable(txema main.c
        suma.cpp)
