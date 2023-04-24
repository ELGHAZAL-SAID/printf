#include "main.h"
/**
* to_octal - fill table with octal chars
* @binary_handler: table
* @input: integer input
* @negative: check if input negative
* @last: presents the limit (11 for integrs)
* Return: octal_handler
*/
char *to_octal(char *octal_handler, long int input, int negative, int last)
{
	int i = 0;

	while (i < last)
	{
		octal_handler[i] = '0';
		i++;
	}

	octal_handler[last] = 0;

	for (i = last - 1; input > 1; i--)
	{
		if (input == 2)
			octal_handler[i] = '0';
		else
			octal_handler[i] = (input % 8) + 48;
		input = input / 8;
	}
	if (input != 0)
		octal_handler[i] = 49;
	if (negative)
	{
		for (i = 0; *(octal_handler + i); i++)
			if (*(octal_handler + i) == 49)
				octal_handler[i] = 48;
			else
				*(octal_handler + i) = 49;
	}
	return (octal_handler);
}
