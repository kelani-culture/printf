#include <stdarg.h>
#include "main.h"
/**
  *print_octal - print an unsigned interger in octal
  *@args: the va_list of arguments
  *@count: the number of characters printed
  */
void print_octal(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[32];
	int i = 0;

	do {
		buffer[i++] = num % 8 + '0';
		num /= 8;
	} while (num);

	while (--i >= 0)
	{
		write(1, &buffer[i], 1);
		(*count)++;
	}
}
