#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_rev - reverse string
 * @s: string
 * Return: s
 */
void *string_rev(char *s)
{
	char b;
	int y, x, a;

	if (s == NULL)
		return (0);

	y = _strlen(s);
	x = _strlen(s) / 2;

	for (a = 0; a < x; a++)
	{
		b = s[a];
		s[a] = s[y - 1 - a];
		s[y - 1 - a] = b;
	}
	return (s);
}
