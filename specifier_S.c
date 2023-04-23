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
	int result;

	/*calculate the length of the string*/
	while (string[len] != '\0')
		len++;

	result = write(STDOUT_FILENO, string, len);
	/*check if the write returrn a negative val*/

	if (result == -1)
		return (-1);

	return (result);
}
