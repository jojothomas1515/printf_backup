#include "main.h"

/**
 * print_char - print character
 * @ap: va list
 * @mod: modifier structure
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
 * @ap: va list
 * @mod: modifier structure
 * Return: count
 */
int print_str(va_list ap, fpw_t *mod)
{
	int count = 0, i;
	char *temp = va_arg(ap, char *);
	char *str = malloc(1024);

	if (temp == NULL)
		temp = "(null)";

	for (i = 0; temp[i] != '\0'; i++)
		str[i] = temp[i];

	if (mod->reverse == 1)
		_strrev(str);
	count += p_str(str);

	free(str);
	return (count);
}

/**
 * print_percent - print percent
 * @ap: va list
 * @mod: modifier structure
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
 * @ap: va list
 * @mod: modifier structure
 * Return: write_count
*/
int print_integer(va_list ap, fpw_t *mod)
{
	long int num = va_arg(ap, long int), count = 0, sign = 0, i = 0;
	unsigned long int u_num;
	char *num_str = malloc(BUFFER_SIZE);

	if (mod->length == E_SHORT)
		num = (short int) num;
	else if (mod->length != E_LONG)
		num = (int) num;
	if (num >= 0 && mod->flag == E_PLUS)
		count += _putchar('+');
	else if (num >= 0 && mod->flag == E_SPACE)
		count += _putchar(' ');
	if (num_str == NULL)
		return (0);
	if (num == 0)
		return ((_putchar('0')) + count);
	else if (num < 0)
	{
		sign = 1;
		u_num = num * -1;
	}
	else
		u_num = num;
	while (u_num > 0)
	{
		num_str[i] = (u_num % 10) + '0';
		u_num /= 10;
		i++;
	}
	if (sign)
		num_str[i++] = '-';
	num_str[i] = '\0';
	_strrev(num_str);
	count += p_str(num_str);
	return (count);
}

/**
 * print_binary - print out the binary representation of unsigned int
 * @ap: va list
 * @mod: modifier structure
 * Return: count of with is printed
 */

int print_binary(va_list ap, fpw_t *mod)
{
	char *b_str = malloc(BUFFER_SIZE);
	int i;
	ulong num = (ulong) va_arg(ap, unsigned long int);

	if (mod->length == E_SHORT)
		num = (unsigned short int) num;
	else if (mod->length != E_LONG)
		num = (unsigned int) num;
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
