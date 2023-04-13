#include "search_algos.h"

/**
  * advanced_binary_recursive - recursively searches for a value in a sorted
  *                             array of integers using binary search.
  * @array: The array to search in.
  * @left: The left index of the array.
  * @right: The right index of the array.
  * @value: The value to search for.
  *
  * Return: -1 If the value is not present,
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - Searches a value in a sorted array using a binary search.
  *
  * @array: The array to search in.
  * @size: The size the array.
  * @value: The value to look for.
  *
  * Return: -1 If the value is not present or the array is NULL,
  *         Otherwise, the first index where the value is located.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
