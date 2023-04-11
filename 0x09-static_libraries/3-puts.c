#include "main.h"
/**
 * _puts - check the code
 *
 * @str: character to enter
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
