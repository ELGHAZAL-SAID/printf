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
	char flag;
	int (*fun)(va_list);

} opt;

/*functions Prototypes */
int (*specifier(const char *sp))(va_list arg);
int _printf(const char *format, ...);
void char_handler(va_list arg);
int di_handler(va_list arg);
char string_handler(va_list arg);


/*helper functions prototypes */
int char_len(char *c);
#endif
