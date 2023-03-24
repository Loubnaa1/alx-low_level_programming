#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: the number of lines
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		if (n > 0)
			_putchar('_');
		else
			_putchar('\n');
		i++;
	}
	_putchar('\n');
}
