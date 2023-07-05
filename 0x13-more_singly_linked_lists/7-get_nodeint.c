#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head node of the linked list.
 * @index: index of the node
 * Return: pointer, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	while (i < index)
	{
		if (head == NULL)
			return (NULL)
		i = i->next;
		i++;
	}

	return (i);
}
