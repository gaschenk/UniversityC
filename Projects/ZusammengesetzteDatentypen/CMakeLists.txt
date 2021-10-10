cmake_minimum_required(VERSION 3.21)
set(EXECUTABLE_NAME "ZusammmengesetzteDatentypen")
project(${EXECUTABLE_NAME} C)

set(CMAKE_C_STANDARD 17)

add_executable(${EXECUTABLE_NAME} main.c main.h VorlesungsInformation.h)
