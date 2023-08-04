#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int variable;
	int i = 0, j;

	if (n == 0)
	{
		printf("0");
		return;
	}
	variable = n;
	while (variable != 0)
	{
		variable = variable >> 1;
		i++;
	}
	j=i-1;
	while (j >= 0)
	{
		if ((n >> j) & 1)
			printf("1");
		else
			printf("0");
		j--;
	}
}
