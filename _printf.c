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
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return(write_count);
			write_count += get_ops(*format)(ap);
			format++;
			continue;
		}
		write_count += _putchar(*format);
		format++;
	}
	va_end(ap);
	return (write_count);
}
