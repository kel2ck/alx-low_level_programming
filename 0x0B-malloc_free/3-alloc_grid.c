#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	a = malloc(height * sizeof(*a));

	if (a == NULL)
		return ('\0');

	for (b = 0; b < height; b++)
	{
		a[b] = malloc(width * sizeof(int));
		if (a[b] == NULL)
		{
			for (; b >= 0; b--)
				free(a[b]);
			free(a);
			return (NULL);
		}
		/*
		 * for (b = 0; b < width; b++)
		 * {
		 * a[b][b] = 0;
		 * }
		 */
	}
	return (a);
}
