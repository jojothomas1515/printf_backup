project("_printf")

set(CMAKE_C_FLAGS "-Wall -Werror -Wextra -pedantic -std=gnu89")

add_executable(_printf main _printf.c _putchar.c get_ops.c ops1.c)