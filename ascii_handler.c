#include "main.h"
/**
 * ascii_handler - Convert value ascii < 32 or > 127 to hexadecimal.
 * @arg: arguments
 * @buffer: String
 * @buffer_size: Intger
 * Return: Intger
 */
int ascii_handler(va_list arg, char *buffer, unsigned int buffer_size)
{
	unsigned char *input = va_arg(arg, unsigned char *);
	unsigned int i = 0, con, sum = 0;
	char *hexa_d, *binary_buffer;

	binary_buffer = malloc(sizeof(char) * (32 + 1));
	hexa_d = malloc(sizeof(char) * (8 + 1));

	while (input[i])
	{
		if (input[i] < 32 || input[i] >= 127)
		{
			buffer_size = buffer_handler(buffer, '\\', buffer_size);
			buffer_size = buffer_handler(buffer, 'x', buffer_size);
			con = input[i];
			binary_buffer = to_binary(binary_buffer, con, 0, 32);
			hexa_d = to_hexadecimal(binary_buffer, hexa_d, 1, 8);

			buffer_size = buffer_handler(buffer, hexa_d[6], buffer_size);
			buffer_size = buffer_handler(buffer, hexa_d[7], buffer_size);
			sum += 3;
		}
		else
			buffer_size = buffer_handler(buffer, input[i], buffer_size);
		i++;
	}
	free(hexa_d);
	return (i + sum);
}
