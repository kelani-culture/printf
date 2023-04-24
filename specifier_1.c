#include <stdarg.h>
#include <unistd.h>
#include <fcntl.h>
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

/**
  *print_hex - Print an unsigned int in hex lower case
  *@args: the va_list of arguments
  *@count: the number of characters printed
  */
void print_hex(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[22];
	int i = 0;

	do {
		buffer[i++] = "0123456789abcdef"[num % 16];
		num /= 16;
	} while (num != 0);

	while (i > 0)
	{
		write(1, &buffer[--i], 1);
		(*count)++;
	}
}

/**
  *print_hex_upper - Print an unsigned int in hex upper case
  *@args: the va_list of arguments
  *@count: the number of characters printed
  */
void print_hex_upper(va_list args, int *count)
{
	unsigned int num = va_args(args, unsigned int);
	char buffer[22];
	int i = 0;

	do {
		buffer[i++] = "0123456789abcdef"[num % 16];
		num /= 16;
	} while (num != 0);

	while (i > 0)
	{
		write(1, &buffer[--i], 1);
		(*count)++;
	}
}

/**
  *print_unsigned - Print an unsigned int
  *@args: the va_list of arguments
  *@count: the number of characters printed
  */
void print_unsigned(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[22];
	int i = 0;

	do {
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	} while (num != 0);

	while (i > 0)
	{
		write(1, &buffer[--i], 1);
		(*count)++;
	}
}
