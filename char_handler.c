#include "main.h"

/**
* char_handler: handle charachters
* @arg: args counter
* Return: len of char
*/


int char_handler(va_list arg)
{
	char value;

	value = va_arg(arg, int);

	write(1, &value, sizeof(char));

	return (1);
}
