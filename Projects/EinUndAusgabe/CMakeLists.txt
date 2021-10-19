cmake_minimum_required(VERSION 3.21)
set(EXECUTABLE_NAME "EinUndAusgabe")
project(${EXECUTABLE_NAME} C)

add_executable(${EXECUTABLE_NAME} main.c Student.h main.h)