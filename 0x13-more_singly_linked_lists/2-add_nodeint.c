#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t
 * @head: pointer to pointer
 * @n: number to add (data)
 * Return:  the address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
