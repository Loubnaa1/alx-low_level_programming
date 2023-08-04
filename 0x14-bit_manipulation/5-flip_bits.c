#include <stdio.h>

/**
 * flip_bits - returns the number of bits needed to flip to get from n to m
 * @n: numberone
 * @m: numbertwo
 * Return:the bits to flip
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
