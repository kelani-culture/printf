#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#define UNUSED(x) (void)(x)

/**
 * struct specifier_s - struct to store specifier information
 * @specifier: the specifier character
 * @print_func: pointer to the corresponding print function
 */

typedef struct specifier_s
{
	char specifier;
	void (*print_func)(va_list, int *);
} specifier_t;


void print_hex(va_list args, int *count);
void print_hex_upper(va_list args, int *count);
void print_unsigned(va_list args, int *count);
void print_octal(va_list args, int *count);
void print_string(va_list args, int *count);
void print_char(va_list args, int *count);
void print_percent(va_list args, int  *count);
int _printf(const char *format, ...);
void print_integer(va_list args, int *count);
void print_binary(va_list args, int *count);
void print_format(const char *format, va_list args, int *count);
#endif
