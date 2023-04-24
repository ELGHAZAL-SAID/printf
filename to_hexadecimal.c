#include "main.h"
/**
* to_hexadecimal - fill table with hexadecimal chars
* @bin: table of bin
* @hex: table of octal
* @s: Integer
* @l: Intger
* Return: hexadecimal_handler
*/
char *to_hexadecimal(char *bin, char *hex, int s, int l)
{
	int i, j, last, op;

	hex[l] = '\0';
	if (s)
		last = 55;
	else
		last = 87;
	for (i = (l * 4) - 1; i >= 0; i--)
	{
		for (op = 0, j = 1; j <= 8; j *= 2, i--)
			op = ((*(bin + i) - '0') * j) + op;
		i++;
		if (op < 10)
			hex[i / 4] = op + 48;
		else
			hex[i / 4] = op + last;
	}
	return (hex);
}
