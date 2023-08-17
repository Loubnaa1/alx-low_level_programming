#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes a node at a given index
 * @head: pointer to pointer
 * @index: index of the new node
 * Return: 1 if success or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *previous = *head;
	unsigned int i = 0;

	if (index == 0)
	{
		if (previous != NULL)
		{
			*head = (*head)->next;
			if (*head != NULL)
				(*head)->prev = NULL;
			free(previous);
			return (1);
		}
	}
	for (i = 0; previous != NULL; i++, previous = previous->next)
	{
		if (index == i)
		{
			if (previous->prev != NULL)
				previous->prev->next = previous->next;
			if (previous->next != NULL)
				previous->next->prev = previous->prev;
			free(previous);
			return (1);
		}
	}
	return (-1);
}
