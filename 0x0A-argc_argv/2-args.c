#include <stdio.h>
/**
 * main - Entry point
 *@argc: number of arguments
 *@argv: arguments
 * Return: Always 1 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
