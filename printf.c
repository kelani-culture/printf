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
	char buffer[BUF_SIZE];

	va_start(args, format);/*initialize the variable arg list*/
	/*checks if format is NULL then return -1 as error*/
	if (format == NULL)
		return (-1);

	check_format(format, args, &count, buffer);

	if (count > 0)
		write(1, buffer, count);

	va_end(args);
	return (count);
}
