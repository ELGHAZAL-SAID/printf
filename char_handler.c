#include "main.h"

/**
* char_handler: handle charachters
* @arg: args counter
* Return: len of char
*/


int char_handler(va_list arg, char buffer, unsigned int buffer_size)
{
	char value;

	value = va_arg(arg, int);

	buffer_handler(buffer, value, buffer_size);

	return (1);
}
