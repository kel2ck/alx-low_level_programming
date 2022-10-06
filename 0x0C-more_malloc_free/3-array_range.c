#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - A function that creates an array of integers.
 * @min: first value of the array
 * @max: last value of the array
 * Return: Pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = t++;
	return (arr);
}
