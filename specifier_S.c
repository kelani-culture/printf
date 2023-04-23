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
	size_t len =  0;

	while (string[len] != '\0')
		len++;
	return (write(STDOUT_FILENO, string, len));
}
