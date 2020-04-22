cmake_minimum_required(VERSION 3.15)
project(MusicTheory)

set(CMAKE_CXX_STANDARD 14)

add_executable(MusicTheory main.cpp test/test_main.cpp src/naturalNote.cpp src/naturalNote.h)