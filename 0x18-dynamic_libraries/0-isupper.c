#include "main.h"

/**
 * _isupper - that checks for uppercase character - returns the check
 * @c: first integer
 * Return: 1 (if upper) 0 (else)
 */
int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
