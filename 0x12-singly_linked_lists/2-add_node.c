#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function with two arguments
 * @head: double pointer to linked list
 * @str: string pointer
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *_temp;

	if (!head || !str)
		return (NULL);
	_temp = malloc(sizeof(list_t));
	if (!_temp)
		return (NULL);
	_temp->str = strdup(str);
	if (!_temp->str)
	{
		free(_temp);
		return (NULL);
	}
	_temp->len = strlen(str);
	_temp->next = *head;
	*head = _temp;
	return (_temp);
}
