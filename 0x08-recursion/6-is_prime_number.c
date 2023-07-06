#include "main.h"
int is_divisible(int n, int x);
/**
 * is_prime_number - prime numb
 *
 * @n: prime
 *
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (!is_divisible(n, n - 1));
}
/**
 * is_divisible - divisible by 2
 *
 * @n: prime
 * @x: number
 *
 * Return: 0
 */
int is_divisible(int n, int x)
{
	if (x == 1)
		return (0);
	if (n % x == 0)
		return (1);
	return (is_divisible(n, x - 1));
}
