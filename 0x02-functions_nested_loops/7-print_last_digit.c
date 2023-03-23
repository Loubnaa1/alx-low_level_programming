#include "main.h"
/**
 * print_last_digit -  function that prints the last digit of a number
 * @n:this is the checking  number
 * Return: b (always positive)
 */
int print_last_digit(int n)
{
	int b;

	b = n % 10;
	if (b < 0)
	{
		b = -b;
		_putchar(b + '0');
		return (b);
	}
	else
	{
		_putchar(b + '0');
		return (b);
	}
}
