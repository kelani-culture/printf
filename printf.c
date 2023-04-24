#include <stdarg.h>
#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _printf - implementation of the printf function.
 *
 * @format: char_specifiers
 * Return: total bytes
 */

int _printf(const char *format, ...)
{
	int count  = 0; /*number of character to be prinited*/
	va_list args; /*initizes a variable to arg list*/

	va_start(args, format);/*initialize the variable arg list*/
	/*checks if format is NULL then return -1 as error*/
	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%') /*checks conversion specifiers*/
		{
			format++; /*move past the %*/
			/* handle each conversion specifieir*/
			switch (*format)
			{
				case 'c':
					print_char(args, &count);
					break;
				case 's':
					print_string(args, &count);
					break;
				case '%':
					print_percent(&count);
					break;
				case 'd': case 'i':
					print_integer(args, &count);
					break;
				case 'b':
					print_binary(args, &count);
					break;
				case 'o':
					print_octal(args, &count);
					break;
				default:
					return (-1);
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
