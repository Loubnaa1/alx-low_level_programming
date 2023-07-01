#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function with one argument
 * @head: pointer to head node of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *f_node;

	while (head)
	{
		f_node = head->next;
		free(head->str);
		free(head);
		head = f_node;
	}
}
