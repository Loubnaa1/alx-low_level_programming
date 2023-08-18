#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts
 * a node at a given index.
 * @h: pointer to  pointer.
 * @idx : index where to insert.
 * @n: value of inserted node.
 * Return: new node or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *previous = *h;
	dlistint_t *new = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));
	previous = previous->next;
	for (i = 0; previous != NULL; i++, previous = previous->next)
	{
		if (idx == i)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->next = previous;
			new->n = n;
			new->prev = previous->prev;
			previous->prev->next = new;
			previous->prev = new;
			return (new);
		}
	}
	if (idx == i)
	{
		return (add_dnodeint_end(h, n));
	}
	free(new);
	return (NULL);
}
