cmake_minimum_required(VERSION 3.15)
project(Ordenacao C)

set(CMAKE_C_STANDARD 99)

add_executable(Ordenacao main.c ordena.c auxiliar.c)