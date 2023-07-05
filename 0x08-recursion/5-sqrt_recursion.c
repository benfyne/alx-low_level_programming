#include "main.h"
int is_perfect_square(int n, int x);
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
	return (is_perfect_square(n, 0));
}
/**
 * _is_perfect_square - square root of natural number
 *
 * @n: number of sqaure root
 * @x: number
 *
 * Return: sqrt
 */
int is_perfect_square(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (is_perfect_square(n, x + 1));
}
