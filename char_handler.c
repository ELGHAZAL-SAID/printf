#include "main.h"
/**
 * char_handler - handle charachters
 * @arg: args counter
 * @buffer: String
 * @buffer_size: unsigned integer
 * Return: Always 1
 */
int char_handler(va_list arg, char *buffer, unsigned int buffer_size)
{
	char value;

	value = va_arg(arg, int);

	buffer_handler(buffer, value, buffer_size);

	return (1);
}
