#include "main.h"
#include "stdio.h"
#include <string.h>
/**
 * _strlen - check the code
 *
 * @s: The parameter to enter
 * Return: i
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}
