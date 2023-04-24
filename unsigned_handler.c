#include "main.h"
/**
 * unsigned_handler - Function handls unsigned nums
 * @arg: argumerts for type va_list
 * @buffer: String
 * @buffer_size: unsigned Integer
 * Return: Integer
 */

int unsigned_handler(va_list arg, char *buffer, unsigned int buffer_size)
{
	int i;
	char division;
	unsigned int current_int, div_num = 1, integer;
	unsigned int value = va_arg(arg, unsigned int);

	integer = value;
	current_int = integer;
	while (current_int > 9)
	{
		div_num *= 10;
		current_int /= 10;
	}
	i = 0;
	while (div_num > 0)
	{
		division = ((integer / div_num) % 10) + '0';
		buffer_size = buffer_handler(buffer, division, buffer_size);
		div_num /= 10;
		i++;
	}
	return (i);
}
