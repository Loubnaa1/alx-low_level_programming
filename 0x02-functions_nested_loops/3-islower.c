#include "main.h"
/**
 *  _islower - function that checks for lowercase character
 *@c: checked variable
 *  Return: 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}