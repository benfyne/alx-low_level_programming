#include "main.h"
/**
 * main - Entry point
 * Write a function that prints 10 times the alphabet,
 * in lowercase followed by a new line, and returns 0
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
