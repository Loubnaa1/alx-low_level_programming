#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: the pointer
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int n = 0;

	while (s[i] != '\0')
		i++;
	for (n = i - 1; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
