#include "main.h"
/**
 * _strbrk - searches string for bytes
 *
 * @s: string
 * @accept: string
 *
 * Return: new value
 */
char *_strbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
