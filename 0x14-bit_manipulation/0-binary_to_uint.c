#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: string of 0 and 1 character.
 * Return: The converted number, otherwise  0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		number = (number * 2) + (b[i] - '0');
	}

	return (number);
}
