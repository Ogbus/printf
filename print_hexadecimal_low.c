#include "main.h"
/**
 * print_hexadecimal_low - print hexadecimal from decimal
 * @list: list
 * Return: pointer to string
 */

char *print_hexadecimal_low(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	char *output;
	int i = 0;
	int tmp;
	int len = num_len(num);

	output = malloc(sizeof(char) * len + 1);

	if (output == NULL)
	{
		free(output);
		return (0);
	}

	if (num == 0)
	{
		output[0] = '0';
		output[1] = '\0';
		return (output);
		}

	while (num != 0)
	{
		tmp = 0;
		tmp = num % 16;

		if (tmp < 10)
		{
			output[i] = tmp + 48;
			i++;
		}
		else
		{
			output[i] = tmp + 87;
			i++;
		}

		num = num / 16;
	}

	string_rev(output);
	output[i] = '\0';

	return (output);
