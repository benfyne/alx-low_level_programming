#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list that can contain loops
 * @h: pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp, *hare, *tortoise;

	if (h == NULL || *h == NULL)
		return (0);
		tortoise = *h;
		hare = (*h)->next;
		while (hare != NULL)
		{
			if (hare < tortoise)
			{
				free(hare);
				count++;
				break;
			}
			tmp = tortoise;
			tortoise = tortoise->next;
			free(tmp);
			count++;
			hare = hare->next;
			if (hare != NULL)
				hare = hare->next;
		}
		free(tortoise);
		count++;
		count++;
		return (count);
}
