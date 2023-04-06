#include "main.h"

/**
 * print_voidp - print out the hexadecimal representation of uint
 * @ap: va list
 * Return: print count
 */
int print_voidp(va_list ap)
{
	char *h_str = malloc(BUFFER_SIZE);
	long int   num = (long int ) va_arg(ap, long int ), i;
	char *arr = "0123456789abcdef";

	if (h_str == NULL)
		return (0);
	if (num == 0)
		return (p_str("(nil)"));

	for (i = 0; num > 0; i++)
	{
		h_str[i] = arr[(num % 16)];
		num /= 16;
	}
	h_str[i++] = 'x';
	h_str[i++] = '0';
	h_str[i] = '\0';
	_strrev(h_str);
	return (p_str(h_str));
}