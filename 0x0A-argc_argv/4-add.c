#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds positive numbers.
 * @argc: The number of arguments supplied
 * @argv: Array of pointers to the arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b, add = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[a]);
	}
	printf("%d\n", add);
	return (0);
}
