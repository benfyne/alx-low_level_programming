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
	int len = strlen(s);

	for (int i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
