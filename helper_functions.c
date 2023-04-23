#include "main.h"
/**
* char_len - calc chars lenght
* @c: character or string
* Return: len
*/


int char_len(char *c)
{
	int i = 0;

	while (*(c + i))
		i++;
	return (i);
}
