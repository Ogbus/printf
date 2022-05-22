#include "main.h"

/**
 * print_str - loops through a string and prints
 * every character
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_str(va_list l, flags_t *f)
{
    char *s = va_arg(l, char *);

    (void)f;

    if (!s)
        s = "(null)";
    return (_puts(s));
}

/**
 * print_c - prints a character
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_c(va_list l, flags_t *f)
{
    (void)f;
    _putchar(va_arg(l, int));
    return (1);
} 
