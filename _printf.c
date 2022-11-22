#include "main.h"

/**
 * _printf - prints out formatted string
 * @format: string with formats
 * @...: variadic args
 * Return: exit_success
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0, op_count = 0;
	va_list list;

	va_start(list, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			op_count += get_op_function(format[i])(list);
			i++;
		} else
		{
			count += _putchar(format[i]);
			i++;
		}
	}
	va_end(list);
	return (count + op_count);
}
