#include <stdio.h>
#include <unistd.h>

/**
 * print_binary - covert integer to binary
 *	* then write to stdout
 * @num: value to convert to binary
 * Return: bytes
 */


int print_binary(unsigned int num)
{
	unsigned int bin;
	char ch;
	int result;

	if (num == 0)
	{
		return (0);
	}
	else if (num > 1)
	{
		/* recursively divide num by 2 */
		print_binary(num / 2);
	}

	/*get the remainder of each num*/
	bin = num % 2;
	/*convert bin to chr*/

	ch = bin + '0';
	/*write to the stdout*/
	result = write(STDOUT_FILENO, &ch, 1);

	if (result == -1)
		return (-1);

	return (result);

}
