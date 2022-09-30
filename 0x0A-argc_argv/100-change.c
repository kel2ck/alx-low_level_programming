#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that prints the minimum number of coins
 * @argc: number of command line arguments
 * @argv: argument value
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int val, count;

	count = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	val = atoi(argv[1]);
	while (val)
	{
		if (val / 25 >= 1)
		{
			val -= 25;
		}
		else if (val / 10 >= 1)
		{
			val -= 10;
		}
		else if (val / 5 >= 1)
		{
			val -= 5;
		}
		else if (val / 2 >= 1)
		{
			val -= 2;
		}
		else
		{
			val -= 1;
		}
		count++;
	}
	printf("%d\n", count);
	return (0);
}
