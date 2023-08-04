#include <stdio.h>

/**
 * flip_bits - Counts the number of bits
 * needed to flip to get from n to m.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ex;
	unsigned int flip = 0;

	ex = n ^ m;
	for (; ex > 0; ex >>= 1)
	{
		flip += ex & 1;
	}
	return (flip);
}
