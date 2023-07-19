#include "function_pointer.h"
/**
 * print_name - prints name
 *
 * @name: name
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
