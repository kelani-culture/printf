#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * _printf - implementation of the printf function.
 *
 * @format: char_specifiers
 * Return: total bytes
 */

int _printf(const char *format, ...)
{
	int bytes = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			++format;
			switch (*format)
			{
				/*string specifier*/
				case 's':
					bytes += str_specifier(va_arg(args, char *));
					break;
				/*char specifier*/
				case 'c':
					bytes += _putchar(va_arg(args, int));
					break;
				/*percent*/
				case '%':
					bytes += _putchar('%');
					break;
				/* binary specifier*/
				case 'b':
					bytes += print_binary(va_arg(args, unsigned int));
					break;
				default:
					return (-1);
			}
		}
		else
			bytes += _putchar(*format);
		format++;
	}
	va_end(args);
	return (bytes);
}
