#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node
 * at index of a listint_t linked list
 * @head: double pointer to head node of list
 * @index: index of node that should be deleted
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *prev;
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	else
	{
		current = *head;
		while (current != NULL)
		{
			if (i == index - 1)
			{
				temp = current->next;
				current->next = temp->next;
				free(temp);
			}
			i++;
			prev = current;
			current = current->next;
		}
		if (current == NULL && i < index)
		{
			return (-1);
		}
	}
	return (1);
}
