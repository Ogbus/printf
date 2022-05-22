#include "main.h"
/**
 * str_len - string length
 * @s: string
 * Return: length of string int
 */
int str_len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
