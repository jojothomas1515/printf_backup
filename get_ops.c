#include "main.h"

/**
 * get_ops - return the function to operate
 * @c: char that maps to a function
 * Return: a function
 */

int (*get_ops(char c))(va_list ap, fpw_t *mod)
{
	int i;
	operations ops[] =
		{{'c', print_char}, {'s', print_str},
		 {'%', print_percent}, {'i', print_integer},
		 {'d', print_integer}, {'b', print_binary},
		 {'u', print_unsigned}, {'o', print_octal},
		 {'x', print_hex}, {'X', print_HEX},
		 {'S', print_String}, {'p', print_voidp},};

	for (i = 0; i < 12; i++)
	{
		if (c == ops[i].c)
			return (ops[i].func);
	}
	return (0);
}

/**
 * handle_flag - scan format for flags and and set it in a struct
 * @format: format string
 * @i: current position in the format
 * @mod: struct with all flags
 */
void handle_flag(const char *format, int *i, fpw_t *mod)
{
	int j;
	const char *arr = "+ #";
	const int flags[] = {E_PLUS, E_SPACE, E_HASH};

	if (format == NULL)
		return;

	for (j = 0; arr[j] != '\0'; j++)
	{
		if (format[*i] == arr[j])
		{
			if ((flags[j] == E_PLUS && format[(*i)+1] == ' ')
			|| (flags[j] == E_SPACE && format[(*i)+1] == '+'))
			{
				(*i)++;
				mod->flag = E_PLUS;
			}
			else
				mod->flag = flags[j];
			(*i)++;
		}
	}

}
