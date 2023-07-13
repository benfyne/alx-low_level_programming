#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: the number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar(':');
		_putchar(' ');
		_putchar('m');
		_putchar('a');
		_putchar('l');
		_putchar('l');
		_putchar('o');
		_putchar('c');
		_putchar(' ');
		_putchar('f');
		_putchar('a');
		_putchar('i');
		_putchar('l');
		_putchar('e');
		_putchar('d');
		_putchar('\n');
		exit(98);
	}
	return (p);
}
