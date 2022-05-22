#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_rverse - print reverse
 * @list: va_list
 *
 * Return: string
 */
char *print_reverse(va_list list)
{
	char *s;
	char w[1024];
	char *z;
	char b;
	int a;
	int y;
	int x;

	z = w;
	s = va_arg(list, char *);
	if (s == NULL)
		return (s = "(null)");

	y = str_len(s);
	x = str_len(s) / 2;

	a = 0;
	while (s[a] != '\0')
	{
		w[a] = s[a];
		a++;
	}

	for (a = 0; a < x; a++)
	{
		b = w[a];
		w[a] = w[y - 1 - a];
		w[y - 1 - a] = b;
	}
	w[y] = '\0';
	return (z);
}
