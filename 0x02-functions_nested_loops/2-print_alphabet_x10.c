#include "main.h"
/**
 * print_alphabet_x10 -  prints ten times an  alphabet in lowercase
 *@c: variable that we check
 * nothing to return
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	j = 0;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
return;
}
