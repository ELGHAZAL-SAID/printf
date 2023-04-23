#ifndef MAIN_H
#define MAIN_
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
int _printf(const char *format, ...);

#endif
