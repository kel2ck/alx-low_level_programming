#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_grid - A function that frees a 2 dimensional grid
 * @grid: pointer to memory to free
 * @height: array height variable
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}
