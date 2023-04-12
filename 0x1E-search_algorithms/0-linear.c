#include "search_algos.h"

/**
 * linear_search - Searches for a value inrs using linear seach
 * @array: A pointer to the first element of the array to search
 * @size: The number elements in the array
 * @value: The value to search for
* Return: -1 If the value is not present in array or the array is NULL.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
