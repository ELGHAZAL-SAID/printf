#include "main.h"
/**
 * per - handler - Function for character %
 * @arg: arguments
 * @buffer: String
 * @buffer_size: Integer
 * Return: Always 1
 */
int per_handler(va_list arg __attribute__((unused)), char *buffer, unsigned int buffer_size)
{
	buffer_handler(buffer, '%', buffer_size);
	return (1);
}
