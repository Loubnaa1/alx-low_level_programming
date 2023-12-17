i#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers using
 * the jump search algorithm.
 * @array: Pointer to the first element of the array.
 * @value: The value to search.
 * @size: The number of elements in the array.
 * Return: The index where value is located.
 * if array is NULL, returns -1.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t s, previous, i;

    if (array == NULL)
        return (-1);

    previous = 0;
    s = sqrt(size);

    printf("Value checked array[%ld] = [%d]\n", previous, array[previous]);

    for (; array[previous] < value && previous < size; )
    {
        previous = s;
        s += sqrt(size);
        if (previous >= size)
            break;

        printf("Value checked array[%ld] = [%d]\n", previous, array[previous]);

        if (s > size - 1)
            s = size;
    }

    printf("Value found between indexes [%ld] and [%ld]\n", previous, s);

    i = previous;
    while (i <= s)
    {
        if (i < size)
        {
            printf("Value checked array[%ld] = [%d]\n", i, array[i]);
            if (array[i] == value)
                return (int)i;
        }
        i++;
    }

    return (-1);
}

