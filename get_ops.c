#include "main.h"

/**
 * get_ops - return the function to operate
 * @c: char that maps to a function
 * Return: a function
 */

int (*get_ops(char c))(va_list ap)
{
	int i;
	operations ops[] = {{'c', print_char},
			    {'s', print_str},
			    {'%', print_percent},
			    {'i', print_integer},
			    {'d', print_integer},
			    {'b', print_binary},
			    {'u', print_unsigned},
			    {'o', print_octal},
			    {'x', print_hex},
			    {'X', print_HEX},
			    {'S', print_String},
			    {'p', print_voidp},
	};

	for (i = 0; i < 12; i++)
	{
		if (c == ops[i].c)
			return (ops[i].func);
	}
	return (0);
}

/*
int handle_flag(char *format, int *i)
{
	return (0);
}*/
