#include "main.h"
#include <stdio.h>
/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: Unsigned long int number
 * @index: Index of the bit to get (0-based,
 * where 0 is the least significant bit).
 * Return: the value of the bit at
 * the given index (0 or 1), or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int s_number;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	s_number = n >> index;

	return (s_number & 1);
}
