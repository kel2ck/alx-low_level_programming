#include <stdio.h>

/**
 * main - print the first  50 fibonacci numbers, starting with 1 and 2
 * Return: Always 0
 */

int main(void)
{
	long int i, j, k, next;

	j = 1;
	k = 2;

	for (i = 1; i <=50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%1d, ", j);
		}
		else
			printf("%1d\n", j);

		next = j + k;
		j = k;
		k = next;
	}

	return (0);
}
