#include "lists.h"

/**
 * print_dlistint - function that print all the elements of struct list
 * @h: pointer to structure
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for ( ; h; h = h->next)
	{
		printf("%d\n", h->n);
		++i;
	}
	return (i);
}
