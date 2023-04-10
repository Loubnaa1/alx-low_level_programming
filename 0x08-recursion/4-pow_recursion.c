#include "main.h"
/**
 * _pow_recursion - function that returns
 * @x: the number
 * @y: the
 * Return: the value
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	y--;
	return (x * _pow_recursion(x, y));
}
