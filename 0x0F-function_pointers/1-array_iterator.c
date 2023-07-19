#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function as parameter
 *
 * @array: array
 * @size: size of array
 * @action: pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
