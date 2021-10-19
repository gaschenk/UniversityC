cmake_minimum_required(VERSION 3.21)
set(EXECUTABLE_NAME "GrundlagenProgrammierung")
project(${EXECUTABLE_NAME} C)

add_executable(${EXECUTABLE_NAME} main.c Player.h main.h)

target_precompile_headers(${EXECUTABLE_NAME} PRIVATE main.h)

