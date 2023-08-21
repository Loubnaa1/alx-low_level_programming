#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @str: Pointer to a character
 * Return: The converted integer
 */
int _atoi(char *str)
{
	int index = 0;
	unsigned int num = 0;
	int negative = 1;
	int result;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] == '-')
			negative *= -1;
		else if (str[index] >= '0' && str[index] <= '9')
		{
			num = (num * 10) + (str[index] - '0');
		}
		else if (num > 0)
			break;
	}

	result = num * negative;
	return (result);
}

