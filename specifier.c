#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_string - implementation of %s
 *
 * @args: argument list
 * @count: character count
 * Return: void
 */

void print_string(va_list args, int *count)
{
	/* get ther string argument*/
	char *str_arg = va_arg(args, char *);

	/* loop until the end of the string*/
	while (*str_arg != '\0')
	{
		/*write each character of the string*/
		write(1, str_arg, 1);
		str_arg++; /*move to the following character*/
		(*count)++; /*increment the count */
	}
}


/**
 * print_char - implementation of %c
 *
 * @args: argument list
 * @count: char count
 * Return: void
 */

void print_char(va_list args, int *count)
{
	char char_arg = va_arg(args, int); /*get character from argument list*/

	/*write to stdout*/
	write(1, &char_arg, 1);
	(*count)++; /*increment each character*/
}

/**
 * print_percent - outout the percent symbol
 * @count: char count
 * Return: void
 */

void print_percent(int *count)
{
	/*write tot the stdout*/
	write(1, "%", 1);
	/*count character*/
	(*count)++;
}
