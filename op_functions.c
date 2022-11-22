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
		return (write_handler(&s, 1));
	return (0);
}

/**
 * write_string - write out string
 * @list: variadic list
 * Return:0
 */
int write_string(va_list list)
{
	char *s = va_arg(list, char *);

	if (s)
	{
		int len = _strlen(s);

		return (write_handler(s, len));
	}
	return (0);

}
