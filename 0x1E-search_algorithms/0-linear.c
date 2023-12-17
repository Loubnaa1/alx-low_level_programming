#include "search_algos.h"

/**
 * linear_search - function that searches a value in
 * an array of integers using the Linear search algorithm
 * @array: pointer to first element
 * @size: size of elements of the array
 * @value: value to search
 * Return: first value located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
