#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: Unsigned long int number
 * @index: Index
 * Return: Value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int t;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	t = n >> index;

	return (t & 1);
}
