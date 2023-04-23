#include "main.h"
/**
 * char_len - calc chars lenght
 * @c: character or string
 * Return: lenght of string
 */
int char_len(char *c)
{
	int i = 0;

	while (*(c + i))
		i++;
	return (i);
}
