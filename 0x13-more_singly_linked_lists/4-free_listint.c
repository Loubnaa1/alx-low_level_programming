#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: Pointer to the head node of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *free_l;

	while (head != NULL)
	{
		free_l = head;
		head = head->next;
		free(free_l);
	}
}
