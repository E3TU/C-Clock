cmake_minimum_required(VERSION 3.29)
project(C_Clock C)

set(CMAKE_C_STANDARD 11)

add_executable(C_Clock main.c)

target_link_libraries(C_Clock PRIVATE ncurses)
