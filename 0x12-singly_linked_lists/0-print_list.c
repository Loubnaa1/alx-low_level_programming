#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that print all element of a list_t
 * @h : pointer to structure
 * Return: nombre of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *C = h;

	while (C)
	{
		if (!C->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", C->len, C->str);
		C = C->next;
		i++;
	}
	return (i);
}
