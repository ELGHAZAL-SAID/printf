#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
/**
 * option - Stucture for Option
 * @flag: String
 * @fun: Pointer to function.
 *
 * Descripotion: Define a new type struct opt whit flag and fun.
 */
typedef struct option
{
	char *flag;
	void (*fun)();

} opt;

/* Prototypes */
int _printf(const char *format, ...);

#endif
