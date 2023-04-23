#include "main.h"
/**
 * print_handler - pointer to function
 * @sp: String
 * @idx: Integer
 * Return: Integer
 */
int (*print_handler(const char *sp, int idx))(va_list, char *, unsigned int)
{
	opt con[] = {
		{"c", char_handler},
		{"s", string_handler},
		{"d", di_handler},
		{"i", di_handler},
		{NULL, NULL}
	};
	int i = 0, j = 0, f_idx;
	f_idx = idx;

	while (con[i].flag && sp)
	{
		if (sp[idx] == con[i].flag[j])
		{
			if(con[i].flag[j + 1] != 0)
			{
				idx++;
				j++;
			}
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			idx = f_idx;
		}
	}
	return (con[i].fun);
}


int ev_print_func(const char *s, int index)
{
	
	opt pr[] = {
		{"c", char_handler},
                {"s", string_handler},
                {"d", di_handler},
                {"i", di_handler},
                {NULL, NULL}
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].flag)
	{
		if (s[index] == pr[i].flag[j])
		{
			if (pr[i].flag[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (j);
}
