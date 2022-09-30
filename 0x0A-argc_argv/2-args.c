#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints all arguments it receives.
 * @argc: number of command line arguments
 * @argv: Argument values
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}

	return (0);
}
