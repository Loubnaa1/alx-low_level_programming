#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of the  list
 * @head: A pointer to the head of the list
 * @n: The number to store
 * Return: The address of the new element, or NULL if the function failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *neu, *alt;
	alt = *head;

	neu = malloc(sizeof(listint_t));
	if (neu == NULL)
		return (NULL);
	neu->n = n;
	neu->next = NULL;
	if (*head == NULL)
		*head = neu;
	else
	{
		while (alt->next != NULL)
			alt = alt->next;
		alt->next = neu;

	}
	return (*head);
}
