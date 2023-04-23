#include "main.h"


int (*specifier(const char *sp))(va_list arg)
{
	char *value;
	value = va_arg(arg, char *);
	write(1, value, sizeof(char) * char_len(value));

	return (char_len(value));

}
