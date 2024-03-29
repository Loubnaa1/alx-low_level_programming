#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: A pointer to a string containing a binary number (0 and 1 characters).
 * Return: The converted number, or 0 if is NULL or
 * contains invalid characters.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = (result * 2) + (b[i] - '0');
	}

	return (result);
}
