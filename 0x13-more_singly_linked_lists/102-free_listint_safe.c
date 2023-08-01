#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to head node of list
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listint_t *next;
	size_t size = 0;

	current = *h;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		size++;
		if (current >= next)
		{
			free(next);
			size++;
			break;
		}
		current = next;
	}
	*h = NULL;
	return (size);
}
