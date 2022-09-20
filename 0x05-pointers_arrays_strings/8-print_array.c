#include "main.h"
#include <stdio.h>
/**
 * print_array - Function that prints n elements of array of integers
 * @a: input  array
 * @n: no of element to be printed
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
		if (k != n - 1)
		printf("%d, ", a[k]);
		else
			printf("%d", a[k]);
printf("\n");
}
