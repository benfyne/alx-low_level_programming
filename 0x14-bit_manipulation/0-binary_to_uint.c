#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if b is NULL or contains non-binary chars
 */
unsigned int binary_to_uint(const char *b)
{
int i;
	unsigned int n = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')num
			return (0);
		dec_val = 2 * n + (b[i] - '0');
	}

	return (n);

}
