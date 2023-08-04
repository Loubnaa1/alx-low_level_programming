#include "main.h"
#include <stdio.h>
/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to an unsigned long int number.
 * @index: Index of the bit to set (0-based,
 * where 0 is the least significant bit).
 * Return: 1 on success, or -1
 * if an error occurred (invalid index or NULL pointer).
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > (sizeof(unsigned long int) * 8) || n == NULL)
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}
