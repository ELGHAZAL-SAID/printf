#include "main.h"

unsigned int specifier(const char *sp)
{
        opt con[] = {
                {'c', char_handler},
                {0, NULL}
        };

        if (con[0].flag == *sp)
                        return (con[0].fun);
        return (NULL);
}
int _printf(const char *format, ...)
{
	va_list arg;

	va_start(arg, format);
	specifier(format);
	return (0);
}

