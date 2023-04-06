#include "main.h"

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
