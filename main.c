#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%hb\n", -2200000000000000);
	len2 = printf("%hb\n", -2200000000000000);
	fflush(stdout);
	if (len != len2)
	{
		printf("len1 %d, len2 %d\n", len, len2);
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
