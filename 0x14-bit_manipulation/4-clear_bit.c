#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to modify
 * @index: the index of the bit, starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	unsigned long int mask = ~(1UL << index);
	*n &= mask;
	return (1);
}