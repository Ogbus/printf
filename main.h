#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
    int plus;
    int space;
    int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
    char c;
    int (*f)(va_list ap, flags_t *f);
} ph;

/* print_nums */
int print_num_int(va_list l, flags_t *f);
void print_numbers(int n);
int print_unsigned_int(va_list l, flags_t *f);
int count_dig(int i);

/* print_bases */
int print_hexadecimal(va_list l, flags_t *f);
int print_hex_low(va_list l, flags_t *f);
int print_bin(va_list l, flags_t *f);
int print_oct(va_list l, flags_t *f);

/* converter */
char *converts(unsigned long int num, int base, int lowercase);

/* _printf */
int _printf(const char *format, ...);

/* get_print */
int (*get_prints(char s))(va_list, flags_t *);

/* get_flag */
int get_flags(char s, flags_t *f);

/* print_alpha */
int print_str(va_list l, flags_t *f);
int print_c(va_list l, flags_t *f);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/* print_custom */
int print_rot13(va_list l, flags_t *f);
int print_reverse(va_list l, flags_t *f);
int print_bigS_non(va_list l, flags_t *f);

/* print_address */
int print_address_int(va_list l, flags_t *f);

/* print_percent */
int print_percentage(va_list l, flags_t *f);



#endif
