#include "main.h"

int _printf(const char *format, ...)
{
	va_list arg;

	va_start(arg, format);
	specifier(format)(arg);
	return (0);

	va_end(arg);
}

