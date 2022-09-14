#include "main.h"
#include <stdio.h>

/**
 * main - print the first  50 fibonacci numbers, starting with 1 and 2
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned int long i = 0, j = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = i + j;
		printf("%ld", sum);

		i = j;
		j = sum;

		if  (count == 49)
			printf("\n");
		else
			printf(",");
	}

	return (0);
}
