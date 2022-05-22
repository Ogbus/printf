#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * _printf - printf function
 * @format: const char pointer
 * Return: b_len
 */
int _printf(const char *format, ...)
{
	char *create_buff;
	int i;
	int j;
	int b_len = 0;
	char *s;
	va_list list;
	flags flags_t[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},
		{"u", print_unsigned_int},
		{"b", print_binary},
		{"o", print_octal},
		{"r", print_reverse},
		{"X", print_hexadecimal},
		{"x", print_hexadecimal_low},
		{"R", rot13},
		{NULL, NULL}
	};

	create_buff = malloc(1024 * sizeof(char));
	if (create_buff == NULL)
	{
		free(create_buff);
		return (-1);
	}

	va_start(list, format);

	if (format == NULL || list == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
			continue;
		else if (format[i] == '%')
		{
			if (format[i + 1] == ' ')
				i += return_positions(format, i);
			for (j = 0; flags_t[j].f != NULL; j++)
			{
				if (format[i + 1] == *(flags_t[j].c))
				{
					s = flags_t[j].f(list);
					if (s == NULL)
						return (-1);
					str_len(s);
					str_cat(create_buff, s, b_len);
					b_len += str_len(s);
					i++;
					break;
				}
			}
			if (flags_t[j].f == NULL)
			{
				create_buff[b_len] = format[i];
				b_len++;
			}
		}
		else
		{
			create_buff[b_len] = format[i];
			b_len++;
		}
	}
	create_buff[b_len] = '\0';
	write(1, create_buff, b_len);
	va_end(list);
	free(create_buff);
	return (b_len);
}
