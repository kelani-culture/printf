#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - output char
 *
 * @chr: char
 * Return: bytes
 */

int _putchar(char chr)
{
	return (write(STDOUT_FILENO, &chr, 1));
}
