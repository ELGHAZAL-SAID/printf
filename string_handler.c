#include "main.h"
/**
 * string_handler - function for string
 * @arg: type for va_list
 * @buffer: String
 * @buffer_size: Integer positive
 * Return: Integer
 */
int string_handler(va_list arg, char *buffer, unsigned int buffer_size)
{
	char *value;
	unsigned int i = 0;
	char null_value[] = "(null)";

	value = va_arg(arg, char *);
	if (value == 0)
	{
		for (i = 0; null_value[i]; i++)
			buffer_size = buffer_handler(buffer, null_value[i], buffer_size);
		return (6);
	}
	for (i = 0; *(value + i); i++)
		buffer_size = buffer_handler(buffer, value[i], buffer_size);

	return (i);
}
