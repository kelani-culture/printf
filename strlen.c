#include <stdio.h>
#include "main.h"

/**
 * _strlen - length of string
 *
 * @str: pointer to str
 * Return: strlen
 */

int _strlen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + _strlen(str + 1));
}
