#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int diff;
	listint_t *tmp;

	if (h == NULL || *h == NULL)
		return (0);
	do {
		count++;
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		if (*h == NULL)
			break;
		 diff = abs(*h - (*h)->next);
	} while (diff > 0);
	*h = NULL;
	return (count);
}
