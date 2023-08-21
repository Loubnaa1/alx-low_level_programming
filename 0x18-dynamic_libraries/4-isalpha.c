#include "main.h"
/**
 *  _isalpha - function that checks for alphabetic  character
 *@c: checked variable
 *  Return: 1 (alphabet) 0 (otherwise)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
