#include "main.h"
/**
 *_putchar - Function printing character
 *@buffersize: String
 *@buffer: String
 *Return: Integer
 */
int _putchar(char *buffer, int buffersize)
{
	return (write(1, buffer, buffersize));
}
