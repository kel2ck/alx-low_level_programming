#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers.
 * @argc: The number of arguments supplied
 * @argv: An array of pointers to the arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 2)
	{
		printf("%i\n", atoi(argv[1] * atoi(argv[2]));
	}
	return (0);
}
