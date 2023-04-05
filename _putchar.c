#include "main.h"

/**
 * _putchar - print out character
 * @c: character
 * Return: then number of item that was written out
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
