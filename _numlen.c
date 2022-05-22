#include <stdio.h>
#include <limits.h>
#include "main.h"
/**
 * num_len - length of number
 * @n: int
 * Return: length
 */
int num_len(int n)
{
	int len = 0;

	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
