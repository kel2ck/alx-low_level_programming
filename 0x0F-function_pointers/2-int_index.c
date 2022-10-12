#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - A function that searches for an integer.
 * @array: input integer array.
 * @size: size of the array.
 * @cmp: A pointer to the function
 * Return: index of the first element of which
 * the cmp function does not return 0, or -1 if no match is found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
