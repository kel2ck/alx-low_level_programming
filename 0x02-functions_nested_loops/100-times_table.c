#include "main.h"

/**
 * print_times_table - function to return absolute values
 * @n: the number to be checked
 * Return: of i
 */
void print_times_table(int n)
{
	int i, j, ck;

	if ((n <= 15) && (n >= 0))
	{
		for (i = 0; i <= n; j++)
		{

			for (j = 0; j <= n; j++)
			{

				if (i == 0)
					printf('0');
				if (i != 0)
					printf("%d", (i * j));
				chk = i * (j + 1);
				if (chk < 10 && j != n)
					printf(", ");
				if (chk >= 10 && chk < 100 && j != n)
					printf(", ");
				if (chk >= 100 && j != n)
					printf(", ");
			}	
		printf("\n");
		}
	}
}

