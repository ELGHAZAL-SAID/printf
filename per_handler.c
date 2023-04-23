#include "main.h"
/**
 * per_handler - Function for character %
 * @ar: arguments
 * @b: String
 * @bus: Integer
 * Return: Always 1
 */
int per_handler(va_list ar __attribute__((unused)), char *b, unsigned int bus)
{
	buffer_handler(b, '%', bus);
	return (1);
}
