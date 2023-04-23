#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * option - Stucture for Option
 * @flag: String
 * @fun: Pointer to function.
 *
 * Description: Define a new type struct opt whit flag and fun.
 */

typedef struct option
{
	char *flag;
	void (*fun)(va_list);

} opt;

/*functions Prototypes */
unsigned int specifier(const char *sp);
int _printf(const char *format, ...);
void char_handler(va_list arg);



/*helper functions prototypes */
int char_len(char *c);
#endif
