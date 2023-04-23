#include "main.h"

int (*print_handler(const char *sp, int idx))(va_list, char *, unsigned int)
{
	opt con[] = {
		{'c', char_handler},
		{'s', string_handler},
		{'d', di_handler},
		{'i', di_handler},
		{0, 0}
	};
	int i = 0, j = 0, f_idx;
	f_idx = idx;

	while (con[i].fun)
	{
		if (s[idx] == con[i].fun[j])
		{
			i
		}
			return (con[i].fun);
	}

	return (0);
}
