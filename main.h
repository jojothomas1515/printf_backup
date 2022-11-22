#ifndef MYPRINTF__MAIN_H_
#define MYPRINTF__MAIN_H_
/*
 * Created by jojo on 11/22/22.
*/
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "my_strings/_string.h"

int _putchar(char c);
/**
 * struct op - operation struct map a specific char to it appropriate
 * function
 * @c: character
 * @f: function pointer
 */
typedef struct op
{
	char c;
	int (*f)(va_list list);
} wr_ops;

typedef unsigned int _uint;

int (*get_op_function(char))(va_list list);

/* output stream handler for different types */
int write_char(va_list);
int write_string(va_list);
int write_int(va_list);
int write_hex(va_list);

/* write handler */
int write_handler(char *, int);

int _printf(const char *format, ...);
#endif /* MYPRINTF__MAIN_H_ */
