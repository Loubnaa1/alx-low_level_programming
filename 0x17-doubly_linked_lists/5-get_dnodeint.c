#include "lists.h"
/**
 * get_dnodeint_at_index - returns node.
 * @head: pointer to head node.
 * @index: index of node to return.
 *
 * Return: pointer or NULL. 
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = head;
	unsigned int i = 0;

	while (h)
	{
		if (i == index)
			return (h);
		h = h->next;
		i++;
	}
	return (NULL);
}
