/*
 * Created by jojo on 11/22/22.
*/

#include "main.h"
int (*get_op_function(char flag))(va_list list)
{
	wr_ops wr_ops_1[] ={
		{'c', write_char},
		{'s',write_string},
		/*{'d', write_int},
		{'x', write_hex},*/
		};

	int i;
	i=0;

	while (i < 3)
	{
		if (flag == wr_ops_1[i].c)
			return (wr_ops_1[i].f);
		i++;
	}
	return (NULL);

}

