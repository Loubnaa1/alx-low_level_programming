#include "lists.h"
/**
 * get_dnodeint_at_index - function that
 * returns the n node of  list.
 * @head: pointer to the head.
 * @index: index of the node.
 * Return: pointer or NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = head;
	unsigned int i = 0;

	while (h != NULL)
	{
		if (i == index)
			return (h);
		h = h->next;
		i++;
	}
	return (NULL);
}
