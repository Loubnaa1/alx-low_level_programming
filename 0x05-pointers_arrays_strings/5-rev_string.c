#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: is the pointer
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int n = 0;
	char va;

	while (s[i] != '\0')
		i++;
	for (n = 0; n < i - 1; n++)
	{
		va = s[n];
		s[n] = s[i];
		s[i] = va;
		i--;
	}
}
