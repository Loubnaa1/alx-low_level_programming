#include "lists.h"
/**
 * sum_dlistint - a function that do the sum
 * of the data values in the list.
 * @head: pointer to the head of the list.
 * Return: resultat
 */
int sum_dlistint(dlistint_t *head)
{
	int resultat = 0;

	while (head != NULL)
	{
		resultat += head->n;
		head = head->next;
	}
	return (resultat);
}
