/*
 * Created by jojo on 11/22/22.
*/
#include "main.h"

/**
 * write_handler - write out to output stream
 * @buf: string to output
 * @buf_size: string size or length
 * Return: number of byte outputted
 */

int write_handler(char *buf, int buf_size)
{
	return (write(1, buf, buf_size));
}
