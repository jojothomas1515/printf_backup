#ifndef MYPRINTF__MAIN_H_
#define MYPRINTF__MAIN_H_
/*
 * Created by jojo on 11/22/22.
*/
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);

typedef struct op
{
	char c;
	int (*f)(va_list list);
} wr_ops;

int (*get_op_function(char))(va_list list);

/*
output stream handler for different types
*/
int write_char(va_list);
int write_string(va_list);
int write_int(va_list);
int write_hex(va_list);

/* write handler */
int write_handler(char *, int);


int _printf(char *, ...);
#endif /* MYPRINTF__MAIN_H_ */
