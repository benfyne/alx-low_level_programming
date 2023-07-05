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
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1, n));
	}
}
/**
 * _sqrt_helper - square root of natural number
 *
 * @n: number of sqaure root
 * @max: number
 * @min: number
 *
 * Return: sqrt helper
 */
int _sqrt_helper(int n, int min, int max)
{
	if (max < min)
	{
		return (-1);
	}
	int guess = (min + max) / 2;

	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess < n)
	{
		return (_sqrt_helper(n, min, guess - 1));
	}
}
