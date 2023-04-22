#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - output char
 *
 * @chr: char
 * Return: bytes
 */

int _putchar(char chr);
{
	if (chr == NULL)
		return (1);
	return (write(STDOUT_FILENO, &chr, 1));
}
