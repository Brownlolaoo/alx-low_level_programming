#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: created array
 */
int *array_range(int min, int max)
{
int *arr, i = 0, z = min;
if (min > max)
return (0);
arr = malloc((max - min + 1) * sizeof(int));
if (!arr)
return (0);
while (i <= max - min)
arr[i++] = z++;
return (arr);
}
