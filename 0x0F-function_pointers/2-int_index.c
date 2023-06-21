#include <stdio.h>
/**
 * int_index - function that searches for an integer
 * @array: pointer to integer
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: return i or -1 if there is no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
