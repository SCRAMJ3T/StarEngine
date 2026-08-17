cmake_minimum_required(VERSION 4.2)
project(SimEngine)

set(CMAKE_CXX_STANDARD 20)

add_executable(SimEngine main.cpp
        math_basic.cpp
        math_basic.h
        math_vector_2.cpp
        math_vector_2.h
        math_vector_3.cpp
        math_vector_3.h
        math_physics.cpp
        math_physics.h
)
