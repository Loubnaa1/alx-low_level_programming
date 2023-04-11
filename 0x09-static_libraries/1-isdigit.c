#include "main.h"

/**
 * _isdigit - that checks for a digit - returns the check
 * @c: first integer
 * Return: 1 (if digit) 0 (else)
 */
int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
