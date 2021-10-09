cmake_minimum_required(VERSION 3.21)
set(EXECUTABLE_NAME "EinUndAusgabe")
project(${EXECUTABLE_NAME} C)

set(CMAKE_C_STANDARD 23)

add_executable(${EXECUTABLE_NAME} main.c Student.h)