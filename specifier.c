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

	if (!str_arg)
	{
		str_arg = "(null)";
	}
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
 * @args: argument list
 * @count: char count
 * Return: void
 */

void print_percent(va_list args, int *count)
{

	UNUSED(args);
	/*write tot the stdout*/
	write(1, "%", 1);
	/*count character*/
	(*count)++;
}

/**
  *print_integer - Implementation of int specifier
  *@args: number
  *@count: character count
  *Return void
  */

void print_integer(va_list args, int *count)
{

	int num = va_arg(args, int);
	int i = 0;
	char buffer[32];

	if (num < 0)
	{
		write(1, "-", 1);
		(*count)++;
		num = -num;
	}

	do {
		buffer[i++] = num % 10 + '0';
		num /= 10;
	} while (num);

	while (--i >= 0)
	{
		write(1, &buffer[i], 1);
		(*count)++;
	}
}

/*************** binary **************/

/**
 * print_binary - implement %b
 *
 * @args: argument list
 * @count: count char
 * Return: void
 */

void print_binary(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[32];
	int i = 0;

	do {
		buffer[i++] = num % 2 + '0';
		num /= 2;
	} while (num);

	while (--i >= 0)
	{
		write(1, &buffer[i], 1);
		(*count)++;
	}
}
