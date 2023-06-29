#include "main.h"
/**
 * *leet(char *s) - encodes a string into 1337
 *
 * @s: string
 * @leet: encoder
 *
 * Return: leet
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char *leet = malloc(size of(char) * strlen(s) + 1);

	while (s[1])
	{
		j = 0;
		while ("AEOTLaeotl"[j])
		{
			if ([i] == "AEOTLaeotl"[j])
			{
				leet[i] = "43071"[j];
				break;
			}
			j++;
		}
		if (!"AEOTLaeotl"[j])
			leet[i] = s[i];
		i++;
	}
	leet[i] = '\0';
	return (leet);
}
