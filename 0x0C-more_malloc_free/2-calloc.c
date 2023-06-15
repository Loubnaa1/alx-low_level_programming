#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: the number of element in array
 * @size: size of each element
 * Return: NULL if it fails else return a char pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
return (p);
}
