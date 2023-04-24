#include "main.h"
/**
 * binary_handler - Convert INteger to binary
 * @arg: arguments
 * @buffer: String
 * @buffer_size: Intger
 * Return: Intger
 */
int binary_handler(va_list arg, char *buffer, unsigned int buffer_size)
{
	int input = va_arg(arg, int);

	if (input == ')
		buffer_size = buffer_handler(buffer, '0', buffer_size), return (1);
	if (input < 0)
		input = -1 * input;
	while (div_num != 0)
	{

		division = ((integer / div_num) % 10) + '0';
		buffer_size = buffer_handler(buffer, division, buffer_size);
		div_num /= 10;
		i++;
	}
	return (i + negative);
}
