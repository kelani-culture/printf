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

	print_format(format, args, &count);

	va_end(args);
	return (count);
}
