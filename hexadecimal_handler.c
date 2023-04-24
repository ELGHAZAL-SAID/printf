#include "main.h"
/**
 * hexadecimal_handler - Convert INteger to hexadecimal
 * @arg: arguments
 * @buffer: String
 * @buffer_size: Intger
 * Return: Intger
 */
int hexadecimal_handler(va_list arg, char *buffer, unsigned int buffer_size)
{
	int input = va_arg(arg, int);
	int first_hexadecimal = 0, i = 0, counter = 0;
	unsigned int negative = 0;
	char *hex, *bin;

	if (input == 0)
	{
		buffer_size = buffer_handler(buffer, '0', buffer_size);
		return (1);
	}
	if (input < 0)
	{
		input = (-1 * input) - 1;
		negative = 1;
	}
	bin = malloc(sizeof(char) * (32 + 1));
	bin = to_binary(bin, input, negative, 32);
	hex = malloc(sizeof(char) * (8 + 1));
	hex = to_hexadecimal(hex, bin, 0, 8);
	while (hex[i])
	{
		if (first_hexadecimal == 0 && hex[i] != 48)
			first_hexadecimal = 1;
		if (first_hexadecimal)
		{
			buffer_size = buffer_handler(buffer, hex[i], buffer_size);
			counter++;
		}
		i++;
	}
	free(hex);
	return (counter);
}