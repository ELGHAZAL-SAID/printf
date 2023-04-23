#include "main.h"


int per_handler(va_list arg __attribute__((unused)), char *buffer, unsigned int buffer_size)
{
	buffer_handler(buffer, '%', buffer_size);
	return (1);
}
