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
int char_handler(va_list arg, char buffer, unsigned int buffer_size);
int di_handler(va_list arg, char *buffer, unsigned int buffer_size);
int string_handler(va_list arg, char *buffer, unsigned int buffer_size);
int _putchar(char *buffer, unsigned int buffer_size);

/*buffer handlers*/
unsigned int buffer_handler(char *buffer, char ch, unsigned int buffer_size);
int _putchar(char *buffer, int buffersize);

/*helper functions prototypes */
int char_len(char *c);
#endif
