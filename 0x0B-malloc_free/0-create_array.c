#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars
 * @size: size of the array
 * @c: A character to initialized the array
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int k;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
	{
		ptr[k] = c;
	}
	return (ptr);
}
