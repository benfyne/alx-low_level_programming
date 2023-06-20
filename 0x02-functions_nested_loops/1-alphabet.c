#include "main.h"
/**
 * print_alphabet - Entry point
 * Write a function that prints alphabet,
 * in lowercase followed by a new line, and returns 0
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int loweralpha;

	for (loweralpha = 97; loweralpha <= 122; loweralpha++)
	{
		_putchar(loweralpha);
	}
	_putchar('\n');
}
