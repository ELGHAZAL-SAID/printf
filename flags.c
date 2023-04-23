#include "main.h"
/**
 * flags - Function for flags
 * @s: String
 * @index: Integer
 * Return: Integer
 */
int flags(const char *s, int index)
{
	opt pr[] = {
		{"c", char_handler},
		{"s", string_handler},
		{"d", di_handler},
		{"i", di_handler},
		{"%", per_handler},
		{NULL, NULL}
	};
	int i = 0, cmp = 0, f_idx;

	f_idx = idx;
	while (pr[i].flag)
	{
		if (s[index] == pr[i].flag[cmp])
		{
			if (pr[i].flag[cmp + 1] != '\0')
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
	return (cmp);
}
