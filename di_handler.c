#include "main.h"


int di_handler(va_list arg)
{
	int value = va_arg(arg, int);
	write(1, &value, sizeof(int));
	return (0);
}
