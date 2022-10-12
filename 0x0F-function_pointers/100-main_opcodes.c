#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its main function
 * @argc: arguments counter
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (; i < atoi(argv[1]); i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < atoi(argv[1]) - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
