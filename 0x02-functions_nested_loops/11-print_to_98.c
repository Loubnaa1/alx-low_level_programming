#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -  function that prints all natural numbers from n to 98
 * @n: is the number to enter
 * Return: nothing to return
 */
void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x < 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);
	else if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x > 98)
				printf(", ");
		}
		printf("\n");
	}
}
