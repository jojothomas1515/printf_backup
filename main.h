#ifndef PRINTF__MAIN_H_
#define PRINTF__MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* my structure */
/**
 * struct operations_s - structure
 * @c: character
 * @func: function
 *
 */
typedef struct operations_s
{
	char c;
	int (*func)(va_list);
} operations;

/* prototype */
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_str(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_binary(va_list);

/* utilities */
int _strlen(char *);
void _strrev(char *);
int p_str(char *str);

int (*get_ops(char))(va_list);

#endif /* PRINTF__MAIN_H_ */
