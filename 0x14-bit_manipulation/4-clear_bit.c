#include "main.h"
#include <stdio.h>
/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: unsigned long int number
 * @index: Index
 * Return: 1 if it is working or -1 if an error occurring
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8) || n == NULL)
		return (-1);

	*n = (*n & (~(1 << index)));
	return (1);
}
