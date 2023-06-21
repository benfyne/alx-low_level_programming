#include "main.h"

/**
 * times_table - Entry point
 * Prints the 9 times table
 *
 * Return: The multiplication of numbers from 0 - 9;
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (c <= 9)
			{
				if (b != 0)
				{
				_putchar(' ');
				}
				_putchar('0' + c);
			}

			else
			{
				_putchar('0' + (c / 10));
				_putchar('0' + (c % 10));
			}

			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
