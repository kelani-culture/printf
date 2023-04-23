#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * _printf - output value to the
 *
 * @format: char_specifiers
 * Return: total bytes
 */

int _printf(const char *format, ...)
{
	char str, chr, pcnt;
	int bytes = 0;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			++format;

			switch (*format)
			{
				case 's':
					str = str_specifier(va_arg(args, char *));
					bytes += str;
					break;
				case 'c':
					chr = _putchar(va_arg(args, int));
					bytes += chr;
					break;
				case '%':
					pcnt = _putchar('%');
					bytes += pcnt;
					break;
				default:
					return (-1);
			}
		}
		else
		{
			bytes += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (bytes);
}
