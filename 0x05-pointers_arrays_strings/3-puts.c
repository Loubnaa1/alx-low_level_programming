#include "main.h"
/**
 * _puts - this function prints a string, followed by a new line
 * @str: entred variable  
 * Return: nothing to return
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
