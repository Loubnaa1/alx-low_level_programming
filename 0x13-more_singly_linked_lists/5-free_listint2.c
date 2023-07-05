#include "lists.h"
/**
 * free_listint2 -  function that frees a list_t
 * @head: pointer to pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *point;

	if (head == NULL)
		return;

	while (*head)
	{
		point = (*head)->next;
		free(*head);
		*head = point;
	}

	head = NULL;
}
