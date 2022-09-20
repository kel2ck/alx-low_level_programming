#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that generates random valid password
 * Return: Always 0
 */

int main(void)
{
	int sum;
	int c;

	sprand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() & 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
