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
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[1] != '\0')
	{
		if (s[i] >= '0' && s[i] <= 9)
		{
			num = num * 10 + (s[i] - '0');
		}
		else if (num > 0)
		{
			break;
		}
		i++;
	}
	return (num * sign);
}
