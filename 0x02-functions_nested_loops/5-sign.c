#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 *@n:the checked number
 *Return: 0 (if equal to zero) 1 (if positive) -1 (negative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
