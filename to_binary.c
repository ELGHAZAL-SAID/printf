#include "main.h"

/**
* to_binary - fill table with binary chars
* @binary_handler: table
* @input: integer input
* @negative: check if input negative
* @last: presents the limit (32 for integrs)
* Return: binary_handler
*/

char *to_binary(char *binary_handler, long int input, int negative, int last)
{
	int i = 0;

	while (i < last)
	{
		binary_handler[i] = '0';
		i++;
	}

	binary_handler[last] = 0;

	for (i = last - 1; input > 1; i--)
	{
		if (input == 2)
			binary_handler[i] = '0';
		else
			binary_handler[i] = (input % 2) + 48;
		input = input / 2;
	}
	if (input != 0)
		binary_handler[i] = 49;
	if (negative)
	{
		for (i = 0; *(binary_handler + i); i++)
			if (*(binary_handler + i) == 49)
				binary_handler[i] = 48;
			else
				*(binary_handler + i) = 49;
	}
	return (binary_handler);
}
