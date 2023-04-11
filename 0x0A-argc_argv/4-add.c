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
	int j;
	int sum;

	if (argc > 1)
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] > '9' || argv[i][j] < '0')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
		printf("0\n");
	return (0);
}
