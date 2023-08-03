#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_binary_helper(n);
}
/**
 * print_binary_helper - prints the binary
 * representation of a number in reverse order
 * @n: the number to print
 */
void print_binary_helper(unsigned long int n)
{
	if (n == 0)
		return;
	print_binary_helper(n >> 1);
	_putchar((n & 1) + '0');
}
