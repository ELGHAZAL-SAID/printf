#include "main.h"
/**
 * octal_handler - Convert INteger to octal
 * @arg: arguments
 * @buffer: String
 * @buffer_size: Intger
 * Return: Intger
 */
int octal_handler(va_list arg, char *buffer, unsigned int buffer_size)
{
	int input = va_arg(arg, int);
	int first_octal = 0, i = 0, counter = 0;
	unsigned int negative = 0;
	char *octal_handler;
	char *binary_handler;

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

	binary_handler = malloc(sizeof(char) * (32 + 1));
	binary_handler = to_binary(binary_handler, input, negative, 32);


	octal_handler = malloc(sizeof(char) * (11 + 1));
	octal_handler = to_octal(octal_handler, binary_handler);

	while (octal_handler[i])
	{
		if (first_octal == 0 && octal_handler[i] != 48)
			first_octal = 1;
		if (first_octal == 1)
		{
			buffer_size = buffer_handler(buffer, *(octal_handler + i), buffer_size);
			counter++;
		}
		i++;
	}
	free(octal_handler);
	return (counter);
}
