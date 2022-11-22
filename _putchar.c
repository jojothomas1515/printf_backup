#include "main.h"
/*
 * Created by jojo on 11/22/22.
*/


/**
* _putchar - prints a character
 * @c: character
 * Return:0;
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
