#include "main.h"
#include <stdio.h>

/**
 * is_prime - function to check if a number is divisible
 * @n: The number to be checked
 * @i: The divisor
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1
 */
int is_prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i <= n / 2)
		is_prime(n, i + 1);
	return (1);
}

/**
 * is_prime_number - Function to check prime number
 * @n: prime variable
 * Return:  of i
 */
int is_prime_number(int n)
{
	int start;

	start = 4;
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	else
		return (is_prime(n, start));
}
