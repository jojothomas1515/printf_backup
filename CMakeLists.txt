cmake_minimum_required(VERSION 3.22)
project(MyPrintf C)

set(CMAKE_C_STANDARD 90)
set(CMAKE_C_FLAGS "-Wall -Werror -Wextra -pedantic -Wno-format -std=gnu89")

add_executable(MyPrintf main.h _write_char.c utils_help.c _printf.c number_base.c get_ops_parse.c str_man.c print_number.c)
