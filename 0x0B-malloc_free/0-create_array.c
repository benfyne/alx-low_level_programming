#include "main.h"
/**
 * create_array - create an array of chars with
 * specific sizes
 *
 * @size: size of arrays
 * @c: char
 *
 * Return: 0 or arr
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (0);
	for (unsigned int i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
