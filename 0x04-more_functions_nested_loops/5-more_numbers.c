#include "main.h"
/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * Return: void
 */
void more_numbers(void)
{
        char marks[20]={'0','1','2','3','4','5','6','7','8','9','1','0','1','1','1','2','1','3','1','4'};
        int j;
        int k;
        for (k =0 ;k <= 9 ;k++)
	{
                for (j = 0; j <= 20; j++)
		{
		       	_putchar(marks[j]);
		}
                 _putchar('\n');
	}
}
