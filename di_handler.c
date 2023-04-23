#include "main.h"
/**
 * di_handler - Function di_handler
 * @arg: argumerts for type va_list
 * @buffer: String
 * @buffer_size: unsigned Integer
 * Return: Integer
 */

int di_handler(va_list arg, char *buffer, unsigned int buffer_size)
{
	int input, i;
	char division;
	unsigned int negative, current_int, div_num = 1, integer;
	int value = va_arg(arg, int);

	input = value;
	negative = 0;
	if (input < 0)
	{
		integer = -1 * value;
		buffer_size = buffer_handler(buffer, '-', buffer_size);
		negative = 1;
	}
	else
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
	return (i + negative);
}
