#include "main.h"

/**
* _putchar - prints a character
 * @c: character
 * Return:0;
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
