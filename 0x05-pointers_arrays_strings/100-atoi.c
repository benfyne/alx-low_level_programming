#include "main.h"
/**
 * _atoi - a function that convert a string to an integer
 *
 * @s: string
 *
 * Return: num * sign
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
		while (*s++);
	}
	return (num * sign);
}
