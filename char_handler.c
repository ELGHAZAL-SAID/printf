#include "main.h"

/**
* char_handler: handle charachters
* @arg: args counter
* Return: len of char
*/


void char_handler(va_list arg)
{
	char value;

	value = va_arg(arg, char);

	write(1, value, sizeof(char));
}
