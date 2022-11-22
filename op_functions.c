/*
 * Created by jojo on 11/22/22.
*/
#include "main.h"

/**
 * write_char - write char to output stream
 * @list: variadic list
 * Return:0
 */
int write_char(va_list list)
{
	char s = va_arg(list, int);
	return (write_handler(&s, 1));
}

/**
 * write_string - write out string
 * @list: variadic list
 * Return:0
 */
int write_string(va_list list)
{
	char *s = va_arg(list, char *);
	_uint len = _strlen(s);
	return (write_handler(s, len));
}
