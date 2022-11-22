/*
 * Created by jojo on 11/22/22.
*/
#include "main.h"

int _printf(char *format, ...)
{
	int i = 0;
	va_list list;
	va_start(list, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			get_op_function(format[i])(list);
			i++;
		} else{
		_putchar(format[i]);
			i++;
		}
	}
	va_end(list);
	return (0);
}
