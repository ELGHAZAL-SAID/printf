#include "main.h"
/**
* to_hexadecimal - fill table with hexadecimal chars
* @binary_buffer: table of binary_buffer
* @hex: table of octal
* @s: Integer
* @l: Intger
* Return: hexadecimal_handler
*/
char *to_hexadecimal(char *binary_buffer, char *hex, int s, int l)
{
	int i, j, last, option;

	hex[l] = '\0';
	if (s)
		last = 55;
	else
		last = 87;
	for (i = (l * 4) - 1; i >= 0; i--)
	{
		for (option = 0, j = 1; j <= 8; j *= 2, i--)
			option = ((*(binary_buffer + i) - '0') * j) + option;
		i++;
		if (option < 10)
			hex[i / 4] = option + 48;
		else
			hex[i / 4] = option + last;
	}
	return (hex);
}
