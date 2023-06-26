#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse
 *
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = length(s) - 1;
	while(i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
