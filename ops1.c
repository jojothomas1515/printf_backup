#include "main.h"

/**
 * print_char - print character
 * @ap: va_list
 * Return: count
 */
int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	return (_putchar(c));
}

/**
 * print_str - print string
 * @ap: va_list
 * Return: count
 */
int print_str(va_list ap)
{
	int count = 0;
	char *str = va_arg(ap, char *);

	while (*str != '\0')
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}

/**
 * print_percent - print percent
 * @ap: va_list
 * Return: 1
 */
int print_percent(va_list ap)
{
	(void) ap;

	return (_putchar('%'));
}
