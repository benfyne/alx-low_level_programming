#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Write a program the alphabet 10 times
 * followed by a new line
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (b = 1; b <= 10; b++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
