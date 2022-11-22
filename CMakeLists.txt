cmake_minimum_required(VERSION 3.22)
project(MyPrintf C)

set(CMAKE_C_STANDARD 90)
set(CMAKE_C_FLAGS "-Wall -Werror -Wextra -pedantic -std=gnu89")

add_executable(MyPrintf main.c _putchar.c op_functions.c write_handler.c get_op_function.c _printf.c my_strings/_strlen.c my_strings/_string.h)
