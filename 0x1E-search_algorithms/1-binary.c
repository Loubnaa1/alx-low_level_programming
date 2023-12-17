#include "search_algos.h"

/**
 * binary_search - This function implements the binary search algorithm on a 
 * sorted array. It searches for a specific value and returns its index.
 * @array: A pointer to the first element of the array.
 * @value: The value to search
 * @size: The size of the array.
 * Return: The index where value is located.
 * if array is NULL, returns -1.
 */

int binary_search(int *array, size_t size, int value)
{
    int link = 0, recht = (int)size - 1, middle, i;

    if (!array)
        return (-1);

    for (; link <= recht;)
    {
        middle = (recht + link) / 2;
        printf("Searching in array: ");
        for (i = link; i <= recht; i++)
        {
            printf("%d", array[i]);
            if (i < recht)
                printf(", ");
        }
        printf("\n");

        if (array[middle] == value)
            return (middle);
        else if (array[middle] < value)
            link = middle + 1;
        else
            recht = middle - 1;
    }

    return (-1);
}

