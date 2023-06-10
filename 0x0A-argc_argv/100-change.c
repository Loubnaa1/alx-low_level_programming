#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *@argc: number of arguments
 *@argv: arguments
 * Return: Always 1 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b, c, d, e;

	a = atoi(argv[argc - 1]);
	if (argc == 2)
	{
		if (a < 0)
			printf("0\n");
		else
		{
			b = a % 25;
			c = b % 10;
			d = c % 5;
			e = d % 2;
			printf("%d\n", a / 25 + b / 10 + c / 5 + d / 2 + e);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
