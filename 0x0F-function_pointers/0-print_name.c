#include "function_pointer.h"
#include <stdio.h>
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
/**
 * print_in_caps - print caps
 *
 * @name: name
 */
void print_in_caps(char *name)
{
	while (*name)
	{
		if (*name >= 'a' && *name <= 'z')
			_putchar(*name - 32);
		else
			_putchar(*name);
		name++;
	}
	_putchar('\n');
}
/**
 * main - name
 *
 * Return: 0
 */
int main(void)
{
	char *name = "John Doe";

	print_name(name, print_in_caps);
	return (0);
}
