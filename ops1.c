#include "main.h"

/**
 * print_char - print character
 * @ap: va_list
 * Return: count
 */
int print_char(va_list ap, fpw_t *mod)
{
	char c = va_arg(ap, int);

	(void) mod;

	return (_putchar(c));
}

/**
 * print_str - print string
 * @ap: va_list
 * Return: count
 */
int print_str(va_list ap, fpw_t *mod)
{
	int count = 0;
	char *str = va_arg(ap, char *);

	(void) mod;
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
int print_percent(va_list ap, fpw_t *mod)
{
	(void) ap;

	(void) mod;
	return (_putchar('%'));
}

/**
 * print_integer - print out an integer
 * @ap: va_list
 * Return: write_count
*/
int print_integer(va_list ap, fpw_t *mod)
{
	int num = va_arg(ap, int), count = 0, sign = 0, i = 0;
	unsigned int u_num;
	char *num_str = malloc(BUFFER_SIZE);

	if (num >= 0 && mod->flag == E_PLUS)
		count += _putchar('+');
	else if (num >= 0 && mod->flag == E_SPACE)
		count += _putchar(' ');
	if (num_str == NULL)
		return (0);
	if (num == 0)
		return (_putchar('0'));
	else if (num < 0)
	{
		sign = 1;
		u_num = num * -1;
	} else
		u_num = num;
	while (u_num > 0)
	{
		num_str[i] = (u_num % 10) + '0';
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

/**
 * print_binary - print out the binary representation of unsigned int
 * @ap: variadic list
 * Return: count of with is printed
 */

int print_binary(va_list ap, fpw_t *mod)
{
	char *b_str = malloc(BUFFER_SIZE);
	int i;
	uint num = (int) va_arg(ap, int);

	(void) mod;
	if (b_str == NULL)
		return (0);
	if (num == 0)
		return (_putchar('0'));

	for (i = 0; num > 0; i++)
	{
		b_str[i] = (num % 2) + '0';
		num /= 2;
	}
	b_str[i] = '\0';

	_strrev(b_str);
	return (p_str(b_str));
}
