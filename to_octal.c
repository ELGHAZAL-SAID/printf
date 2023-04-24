#include "main.h"
/**
* to_octal - fill table with octal chars
* @binary_handler: table
* @octal_handler: table of octal
* Return: octal_handler
*/
char *to_octal(char *octal_handler, char *binary_handler)
{
	int i = 0, octal_size, octal, j, last;

	octal_handler[11] = 0;
	for (i = 31, octal_size = 10; i >= 0; i--, octal_size--)
	{
		if (i > 1)
			last  = 4;
		else
			last = 2;
		for (octal = 0, j = 1; j <= last; j *= 2, i--)
			octal = ((*(binary_handler + i) - 48) * j) + octal;
		i++;
		octal_handler[octal_size] = octal + '0';
	}
	return (octal_handler);
}
