#include "main.h"
/**
 * print_sign - Entry point
 * Write a function that prints the sign of a number
 * @n: Uses defined argument
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar(43);
		return (0);
	}
	else if (n > 1)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
