#include "main.h"

/**
 * main - Entry point, Priting _putchar
 * Return: 0
 */
int main(void)
{
	int i;
	char array[] = "_putchar";

	for (i = 0; i < 10; i++)
	{
		if (array[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(array[i]);
	}
return (0);
}
