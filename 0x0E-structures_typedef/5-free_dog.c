#include "dog.h"
#include <stdlib.h>
/**
 * frees memory allocated for a struct dog
 * @d: pointer to structure
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
