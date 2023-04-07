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
	int write_count = 0, i;
	fpw_t mod;

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			handle_flag(format, &i, &mod);
			if (get_ops(format[i]) != 0)
			{
				write_count += get_ops(format[i])(ap, &mod);
				continue;
			}
			else if (format[i] != '\0')
			{
				i--;
				goto print_format;
			}
			return (-1);
		}
print_format:
		write_count += _putchar(format[i]);
	}
	va_end(ap);
	return (write_count);
}
