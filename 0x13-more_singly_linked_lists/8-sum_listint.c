#include "lists.h"
/**
 * sum_listint - Returns the sum of data in the list.
 * @head: Pointer to the stucture.
 * Return: The sum of all the data , or 0 if emty
 */
int sum_listint(listint_t *head)
{
	int somme = 0;

	while (head != NULL)
	{
		somme += head->n;
		head = head->next;
	}
	return (somme);
}
