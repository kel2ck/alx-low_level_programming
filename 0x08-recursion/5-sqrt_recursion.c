#include "main.h"
#include <stdio.h>

/**
 * find_sqrt - function that finds the square root of a number.
 * @k: variable to find its square root
 * @i: root of the value to be tested
 * Return: if the @k has a natural square root - square root
 *         if the @k does not have a  natural square root - -1.
 */
int find_sqrt(int k, int i)
{
	if ((i * i) == k)
		return (i);

	if (i == k / 2)
		return (-1);

	return (find_sqrt(k, i + 1));
}

/**
 * _sqt_recursion - Returns the square root of a number.
 * @n: integer value to return the square root of
 * Return: Natural square root of @n
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);
	return (find_sqrt(n, i));
}
