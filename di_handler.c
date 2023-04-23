#include "main.h"


int di_handler(va_list arg, char *buffer, unsigned int buffer_size)
{
	int input;
	char dividion,
	unsigned int negative = 0, current_int, div_num, integer;

	int value = va_arg(arg, int);

	while (integer < 0)
	{
		integer = -(value);
		buffer_size = buffer_handler(buffer, '-', buffer_size);
		negative = 0;
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
