#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * str_specifier - output string
 *
 * @string: string char
 * Return: string to stdout
 */

int str_specifier(char *string)
{
	if (string == NULL)
		return (1);
	return (write(STD_FILENO, string, _strlen(string));
}
