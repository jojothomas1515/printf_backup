#include "main.h"

/**
 * write_char - write char to output stream
 * @list: variadic list
 * Return:0
 */
int write_char(va_list list)
{
	char s = va_arg(list, int);

	if (s)
		return (_putchar(s));
	return (1);
}

/**
 * write_string - write out string
 * @list: variadic list
 * Return:0
 */
int write_string(va_list list)
{
	int i = 0;
	char *s = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
