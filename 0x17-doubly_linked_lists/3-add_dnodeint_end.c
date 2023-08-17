#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - add new node at the end of a list.
 * @head: address of pointer
 * @n: new node value
 *
 * Return: new node address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *previous;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		previous = *head;
		while (previous->next)
			previous = previous->next;

		previous->next = new;
		new->prev = previous;
	}
	return (new);
}
