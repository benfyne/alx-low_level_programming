#include "main.h"
/**
 * rev_string -  a function that reverses a string
 *
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int a;
	int b;
	char c;

	for (a = 0, b = 0; s[b + 1]; b++)
		;
	while (a < b)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a++;
		b++;
	}
}
