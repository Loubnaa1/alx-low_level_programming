#include "main.h"
/**
 *  _isalpha - function checking for alphabetic  character
 *@i: variable that we check
 *  Return: 1 (alphabet) 0 (otherwise)
 */
int _isalpha(int i)
{
	if (i >= 'a' && i <= 'z')
		return (1);
	else if (i >= 'A' && i <= 'Z')
		return (1);
	else
		return (0);
}
