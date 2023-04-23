#include "main.h"

int (*specifier(const char *sp))(va_list arg)
{
	int i;
	opt con[] = {
		{'c', char_handler},
		{'s', string_handler},
		{'d', di_handler},
		{'i', di_handler},
		{0, 0}
	};

	for (i = 0; con[i].fun; i++)
	{
		if (con[i].flag == *sp)
			return (con[i].fun);
	}

	return (0);
}
