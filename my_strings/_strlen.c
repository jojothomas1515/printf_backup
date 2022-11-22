/**
 * _strlen - compute the length of a string
 * @s: string parameter
 * Return: the length of s
 */

int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
