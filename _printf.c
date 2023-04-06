#include "main.h"
#include <stdio.h>

/**
 * _printf - print format to the output
 * @format: the string to be formatted
 * @...: variadic function
 * Return: the count of character printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int write_count = 0;

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (get_ops(*format) != 0)
			{
				write_count += get_ops(*format)(ap);
				format++;
				continue;
			} else if (*format != '\0')
			{
				format--;
				goto print_format;
			}
			return (-1);
		}
print_format:
		write_count += _putchar(*format);
		format++;
	}
	va_end(ap);
	return (write_count);
}
