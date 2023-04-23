#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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
	int (*fun)(va_list, char *, unsigned int);

} opt;

/*functions Prototypes */
int (*print_handler(const char *sp, int idx))(va_list, char *, unsigned int);
int _printf(const char *format, ...);
int char_handler(va_list arg, char *buffer, unsigned int buffer_size);
int di_handler(va_list arg, char *buffer, unsigned int buffer_size);
int string_handler(va_list arg, char *buffer, unsigned int buffer_size);

/*buffer handlers*/
unsigned int buffer_handler(char *buffer, char ch, unsigned int buffer_size);
int _putchar(char *buffer, int buffersize);
int ev_print_func(const char *s, int index);

/*helper functions prototypes */
int char_len(char *c);
#endif
