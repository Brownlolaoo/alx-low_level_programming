#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: array for value to be searched
 * @size: size of the array
 * @value: value of the data
 *
 * Return: the index of the value found,
 * or -1 if the value is not found
 */
int linear_search(int *array, size_t size, int value)
{
    size_t p = 0;

    if (!array || size == 0)
        return (-1);

    while (p < size)
    {
        printf("value checked array[%lu] = [%d]\n", p, array[p]);
        if (array[p] == value)
            return (p);
        p++;
    }
    return (-1);
}
