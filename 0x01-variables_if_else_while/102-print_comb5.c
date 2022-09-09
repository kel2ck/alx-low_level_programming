#include <stdio.h>
/**
 * main - Entry point
 * Description: print all possible combination of two digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = i; k <= 9; k++)
			{
				for (l = j + 1; l <= 9; l++)
				{
					putchar(i % 10 + '0');
					putchar(j % 10 + '0');
					putchar(' ');
					putchar(k % 10 + '0');
					putchar(l % 10 + '0');
					if (j == 9 && i == 8 && k == 9 && l == 9)
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
