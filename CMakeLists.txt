cmake_minimum_required(VERSION 3.1)
project(quiz_runner)

set(CMAKE_CXX_STANDARD 20)

add_executable(quiz_runner main.cpp src/Check.cpp src/Check.h src/Menu.cpp src/Menu.h src/Body.cpp src/Body.h)
