#include "lists.h"
/**
 * pop_listint - function that deletes the head node of linked list
 * @head: pointer to pointer
 * Return: i or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *point;
	int i;

	if (*head == NULL)
		return (0);
	point = *head;
	i = point->n;
	*head = point->next;
	free(point);
	return (i);
}
