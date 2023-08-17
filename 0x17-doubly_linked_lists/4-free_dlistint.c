#include "lists.h"
/**
 * free_dlistint - function that frees the list.
 * @head: pointer to pointer.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	while (head != NULL)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
