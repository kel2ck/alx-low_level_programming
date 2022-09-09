#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: to generate a random number n
 * to check if n>0 or n<0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
	printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
	printf("%i is negative\n", n);
	}
	else
	{
	printf("%i is positive\n", n);
	}
	return (0);
}
