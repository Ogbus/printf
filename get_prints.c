#include "main.h"

/**
 * get_prints - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * func_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 */
int (*get_prints(char s))(va_list, flags_t *)
{
	ph func_arr[] = {
		{'i', print_num_int},
		{'s', print_str},
		{'c', print_c},
		{'d', print_num_int},
		{'u', print_unsigned_int},
		{'x', print_hexadecimal},
		{'X', print_hex_low},
		{'b', print_bin},
		{'o', print_oct},
		{'R', print_rot13},
		{'r', print_reverse},
		{'S', print_bigS_non},
		{'p', print_address_int},
		{'%', print_percentage}
		};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
