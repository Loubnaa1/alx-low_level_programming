#include "main.h"
/**
 * times_table - function that prints the 9 times table starting with 0
 * Return : nothing
 */
void times_table(void)
{
	int i;
	int j;
	int mult;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			mult = i * j;

			if (mult <= 9)
				_putchar(' ');
			else
				_putchar((mult / 10) + '0');

			_putchar((mult % 10) + '0');
		}
		_putchar('\n');
	}
}
