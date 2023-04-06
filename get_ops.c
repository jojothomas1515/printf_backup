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
			    {'b', print_binary}
	};

	for (i = 0; i < 5; i++)
	{
		if (c == ops[i].c)
			return (ops[i].func);
	}
	return (0);
}

