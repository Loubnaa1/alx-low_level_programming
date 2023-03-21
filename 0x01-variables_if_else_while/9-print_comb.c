#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = '0';
	for (j = 0; j < 10; j++)
	{
		putchar(i);
		if (j == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
