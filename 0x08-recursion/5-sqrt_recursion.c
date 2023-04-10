#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number
 * Return: result
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (_sqrt_recursion_iteration(n, i));
}

/**
 * _sqrt_recursion_iteration - function yo
 * @i: square root
 * @n:  number
 * Return: result
 */

int _sqrt_recursion_iteration(int n, int i)
{
	if (n < i * i)
		return (-1);
	if (n == i * i)
		return (i);
	if (n == 0)
		return (0);
	return (_sqrt_recursion_iteration(n, i + 1));
}
