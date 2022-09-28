#include "main.h"
#include <stdio.h>

/**
 * factorial - A function that returns the factorial of a number.
 * @n: variable to factorise
 * Return: recursion
 */

int factorial(int n)
{
	int fact = 0;

	if (n < 0)
		return (-1);
	else if (n > 0 && n <= 1)
		return (1);

	fact = n * factorial(n - 1);
	return (fact);
}
