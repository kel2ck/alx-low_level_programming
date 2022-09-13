#include "main.h"
/**
 * times_table - times table function
 *Return: 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 0)
				printf("0");

			if (j != 10)
			{
				if (i !=0)
					printf("%d", (i * j));
				if ((i * (j + 1)) < 10 && j != 9)
					printf(", ");
				if ((i * (j + 1)) >= 10 && j !=9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
