#include "main.h"
/**
 * print_last_digit - Entry point
 * print the last digit of a number
 *
 * @x: an interger
 *
 * Return: Last digit
 */
int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (y < 0)
	{
		_putchar(-y * 48);
		return (-y);
	}
	else
	{
		_putchar(y * 48);
		return (y);
	}
}
