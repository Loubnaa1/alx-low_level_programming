#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *@argc: number of arguments
 *@argv: arguments
 * Return: Always 1 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int m = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			m = m * atoi(argv[i]);
		}
	}
	else if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", m);
	return (0);
}
