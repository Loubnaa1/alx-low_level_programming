#include "main.h"
/**
 *  _islower - function checking  for lowercase character
 *@i: variable that we check
 *  Return: 0 (Success)
 */
int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
		return (1);
	else
		return (0);
}
