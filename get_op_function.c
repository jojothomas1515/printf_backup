#include "main.h"
/**
 * get_op_function - return a pointer to character corresponding function
 * @flag: character flag
 * Return: function pointer or NULL if not found
 */
int (*get_op_function(char flag))(va_list list)
{
	wr_ops wr_ops_1[] = {{'c', write_char}, {'s', write_string},};

	int i;

	i = 0;

	while (i < 2)
	{
		if (flag == wr_ops_1[i].c)
			return (wr_ops_1[i].f);
		i++;
	}
	return (NULL);

}

