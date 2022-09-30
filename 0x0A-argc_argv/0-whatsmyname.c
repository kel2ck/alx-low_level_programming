#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints its name, followed by a new line.
 * @argc: Number of command line arguments.
 * @argv: Array of strings of argument passed
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", argv[0]);
	return (0);
}
