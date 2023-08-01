#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to head node of list
 * @idx: index where new node should be added
 * @n: data (n) for new node
 * Return: address of new element or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	listint_t *prev;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		current = *head;
		while (current != NULL)
		{
			if (i == idx)
			{
				prev->next = new;
				new->next = current;
			}
			i++;
			prev = current;
			current = current->next;
		}
		if (current == NULL && i < idx)
		{
			free(new);
			return (NULL);
		}
	}
	return (new);
}
