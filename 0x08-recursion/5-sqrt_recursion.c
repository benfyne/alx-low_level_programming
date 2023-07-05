#include "main.h"
/**
 * _sqrt_recursion - squaare root of a number
 *
 * @n: number of square root
 *
 * Return: n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_is perfect_square(n, 0));
}
/**
 * _is_perfect_square - square root of natural number
 *
 * @n: number of sqaure root
 * @x: number
 *
 * Return: sqrt
 */
int _is_perfect_square(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (_is_perfect_square(n, x + 1));
}
