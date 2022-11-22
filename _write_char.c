#include "main.h"

/**
* _write_char - writes the character c to stdout
 * @c: The character to print
 * Return: 1 on success or -1 on error
*/

int _write_char(char c)
{
	return (write(1, &c, 1));
}
