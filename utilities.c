#include "main.h"
#include <stdio.h>

/**
 * _strrev - reverse string
 * @str: string printer
 * Return:void
*/

void _strrev(char *str)
{
	int len, i;
	char temp;

	if (str == NULL)
		return;
	len = _strlen(str);
	for (i = 0; i < len - i - 1; i++)
	{

		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}

/**
 * _strlen - return the length of a string
 * @str: target string
 * Return: str length
 */
int _strlen(char *str)
{
	int count = 0;

	if (str == NULL)
		return (0);

	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

/**
 * p_str - print out string
 * @str: target string
 * Return: count
 */
int p_str(char *str)
{
	int count = 0;

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
 * p_hex - print out the hexadecimal representation of uint
 * @hex: char in hex
 * Return: print count
 */
int p_hex(int hex)
{
	char *h_str = malloc(BUFFER_SIZE);
	uint num = hex, i, own = hex;
	char *arr = "0123456789ABCDEF";

	if (h_str == NULL)
		return (0);

	for (i = 0; num > 0; i++)
	{
		h_str[i] = arr[(num % 16)];
		num /= 16;
	}
	if (own > 15)
	{
		h_str[i++] = 'x';
		h_str[i++] = '\\';
	} else
	{
		h_str[i++] = '0';
		h_str[i++] = 'x';
		h_str[i++] = '\\';
	}
	h_str[i] = '\0';
	_strrev(h_str);
	return (p_str(h_str));
}
