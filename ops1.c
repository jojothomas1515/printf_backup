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

	if (str == NULL)
		str = "(null)";
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

/**
 * print_integer - print out an integer
 * @ap: va_list
 * Return: write_count
*/
int print_integer(va_list ap)
{
	int num = va_arg(ap, int), count = 0, sign = 0, i = 0;
	unsigned  int u_num;
	char *num_str = malloc(1024);

	if (num_str == NULL)
		return (0);

	if (num < 0)
	{
		sign = 1;
		u_num = num * -1;
	}

	while (u_num > 0)
	{
		num_str[i] = (u_num  % 10) + '0';
		u_num /= 10;

		i++;
	}
	if (sign)
		num_str[i] = '-';
	i++;
	num_str[i] = '\0';
	_strrev(num_str);

	i = 0;
	while (num_str[i] != '\0')
	{
		count += _putchar(*num_str);
		num_str++;
	}

	return (count);
}
