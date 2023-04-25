#include <stdarg.h>
#include "main.h"
#include <stdio.h>
#include <unistd.h>


/**
 * print_format - print the formatted output
 * @format: the format string
 * @args: the va_list of arguments
 * @count: the number of characters printed
 */

void print_format(const char *format, va_list args, int *count)
{
	specifier_t specifiers[] = {

		{'c', &print_char},
		{'s', &print_string},
		{'d', &print_integer},
		{'i', &print_integer},
		{'o', &print_octal},
		{'u', &print_unsigned},
		{'x', &print_hex},
		{'X', &print_hex_upper},
		{'%', &print_percent},
		{'\0', NULL}
	};
	int i;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			for (i = 0; specifiers[i].specifier != '\0'; i++)
			{
				if (*format == specifiers[i].specifier)
				{
					specifiers[i].print_func(args, count);
					break;
				}
			}
		}
		else
		{
			write(1, format, 1);
			(*count)++;
		}
		format++;
	}
}
