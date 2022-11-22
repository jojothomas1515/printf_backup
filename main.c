#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	len = printf("hello %c%c%c initials %c", '2', '4', '6', '7', '3', '9', '3');
	printf("\n%d\n", len);
	return (0);
}
