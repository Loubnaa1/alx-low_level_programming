#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: the size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = size; i >= 1; i--)
		{
			for (j = 1; j <= size; j++)
			{
				if (i == 2 && j == 2)
					_putchar('#');
				else if (j == size || j > i || i == j)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
