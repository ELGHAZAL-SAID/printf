#include "main.h"

unsigned int specifier(const char *sp)
{
	int i;
	opt con[] = {
		{'c', char_handler},
		{'s', string_handler},
		{'d', di_handler},
		{'i', di_handler},
		{0, NULL}
	};

	for (i = 0; con[i].fun; i++)
	{
		if (con[i].flag == *sp)
			return (con[i].fun);
	}

	return (NULL);
}
