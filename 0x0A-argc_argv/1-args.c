#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the number of arguments passed into it
 * @argc: The number of arguments supplied
 * @argv: An argument values
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argv)
		printf("%i\n", argc - 1);
	return (0);
}
