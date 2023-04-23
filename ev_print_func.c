#include "main.h"
/**
 * ev_print_func - Function for ev_print_func
 * @s: String
 * @index: Integer
 * Return: Integer
 */
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
