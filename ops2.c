#include "main.h"

/**
 * print_unsigned - print unsigned integers
 * @ap: va list
 * Return: print count
 */
int print_unsigned(va_list ap)
{
	char *u_str = malloc(BUFFER_SIZE);
	uint num = (uint) va_arg(ap, int), i;

	if (u_str == NULL)
		return (0);
	if (num == 0)
		return (_putchar('0'));

	for (i = 0; num > 0; i++)
	{
		u_str[i] = (num % 10) + '0';
		num /= 10;
	}
	u_str[i] = '\0';
	_strrev(u_str);
	return (p_str(u_str));
}

/**
 * print_octal - print out the octal representation of uint
 * @ap: va list
 * Return: print count
 */
int print_octal(va_list ap)
{
	char *o_str = malloc(BUFFER_SIZE);
	uint num = (uint) va_arg(ap, int), i;

	if (o_str == NULL)
		return (0);
	if (num == 0)
		return (_putchar('0'));

	for (i = 0; num > 0; i++)
	{
		o_str[i] = (num % 8) + '0';
		num /= 8;
	}
	o_str[i] = '\0';
	_strrev(o_str);
	return (p_str(o_str));
}

/**
 * print_hex - print out the hexadecimal representation of uint
 * @ap: va list
 * Return: print count
 */
int print_hex(va_list ap)
{
	char *h_str = malloc(BUFFER_SIZE);
	uint num = (uint) va_arg(ap, int), i;
	char *arr = "0123456789abcdef";

	if (h_str == NULL)
		return (0);
	if (num == 0)
		return (_putchar('0'));

	for (i = 0; num > 0; i++)
	{
		h_str[i] = arr[(num % 16)];
		num /= 16;
	}
	h_str[i] = '\0';
	_strrev(h_str);
	return (p_str(h_str));
}

/**
 * print_HEX - print out the hexadecimal representation of uint
 * @ap: va list
 * Return: print count
 */
int print_HEX(va_list ap)
{
	char *h_str = malloc(BUFFER_SIZE);
	uint num = (uint) va_arg(ap, int), i;
	char *arr = "0123456789ABCDEF";

	if (h_str == NULL)
		return (0);
	if (num == 0)
		return (_putchar('0'));

	for (i = 0; num > 0; i++)
	{
		h_str[i] = arr[(num % 16)];
		num /= 16;
	}
	h_str[i] = '\0';
	_strrev(h_str);
	return (p_str(h_str));
}

/**
 * print_String - print string and print special characters as \x
 * @ap: va list
 * Return: print count
 */
int print_String(va_list ap)
{
	int count = 0;
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(null)";
	while (*str != '\0')
	{
		if (*str > 31 && *str < 127)
		{
			count += _putchar(*str);

		} else
			count += p_hex(*str);

		str++;
	}

	return (count);
}
