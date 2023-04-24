#include "main.h"


unsigned int number_Specifier(va_list args, buffer_t *output,
			unsigned char len);


/**
 *number_Specifier - Converts an argument to a signed int and
 *              stores it to a buffer contained in a struct.
 * @args: A va_list pointing to the argument to be converted.
 * @output: A buffer_t struct containing a character array.
 *
 * Return: The number of bytes stored to the buffer.
 */
