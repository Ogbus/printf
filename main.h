#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct print_flags - Struct
 *
 * @c: The operator
 * @f: The function associated
 */
struct print_flags
{
char *c;
char *(*f)(va_list list);
};
typedef struct print_flags flags;
int _printf(const char *format, ...);
int str_len(char *s);
char *str_cat(char *dest, char *src, int n);
char *print_char(va_list list);
char *print_string(va_list list);
char *print_int(va_list list);
char *print_d(va_list list);
char *print_p(va_list list);
char *print_unsigned_int(va_list list);
char *print_octal(va_list list);
char *print_hexadecimal(va_list list);
char *print_hex_low(va_list list);
char *print_reverse(va_list list);
void *string_rev(char *s);
char *print_binary(va_list list);
char *rot13(va_list list);
int return_positions(const char *s, int n);
int num_len(int n);
char *str_cpy(char *dest, char *src);
#endif
