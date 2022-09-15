#include <stdio.h>

/**
 * main - program that prints the numbers from 1 to 100
 * print Fizz for multiples of 3
 * print Buzz for multiples of 5
 * print FizzBuzz for multiples of both
 * Return: 0 (Success)
 */

int main(void)
{
	int a;

	a = 1;
	printf("%d", a);
	for (a = 2; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
	}
	printf("\n");
	return (0);
}
