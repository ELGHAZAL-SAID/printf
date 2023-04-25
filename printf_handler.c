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
		{"b", binary_handler},
		{"o", octal_handler},
		{"u", unsigned_handler},
		{"x", hexadecimal_handler},
		{"X", upper_hexa_handler},
		{"S", ascii_handler},
		{"%", per_handler},
		{NULL, NULL}
	};
	int i = 0, j = 0, f_idx;

	f_idx = idx;
	while (con[i].flag && sp)
	{
		if (sp[idx] == con[i].flag[j])
		{
			if (con[i].flag[j + 1] != 0)
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
