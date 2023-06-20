#include "main.h"
/**
 * main - Entry point
 * Write a function that prints alphabet,
 * in lowercase followed by a new line, and returns 0
 *
 * Return: Always 0
 */
int main(void)
{
	int loweralpha;

	for (loweralpha = 97; loweralpha <= 122; loweralpha++)
	{
		_putchar(loweralpha);
	}
	_putchar('\n');
	return (0);
}
