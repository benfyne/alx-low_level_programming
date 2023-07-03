#include "main.h"
/**
 * _strspn - length of prefix substring
 *
 * @s: string
 * @accept: prefix
 *
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int count = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
			j++;
		}
		if (!accept[j])
			return (count);
		i++
	}
	return (count);
}
