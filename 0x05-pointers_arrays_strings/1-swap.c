#include "main.h"
#include <stdio.h>

/**
 * swap_int - A function that swap the values of two integers
 * @a: the first  integer to swap
 * @b: the second integer to swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
