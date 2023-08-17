#include "lists.h"
/**
 * dlistint_len - function  that returns the number of elements.
 * @h: pointer to structure.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for ( ; h; h = h->next)
		++i;

	return (i);
}
