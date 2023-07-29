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
	unsigned int count = 0;

	ex = n ^ m;
	while (ex > 0)
	{
		count += ex & 1;
		ex >>= 1;
	}

	return (count);
}
