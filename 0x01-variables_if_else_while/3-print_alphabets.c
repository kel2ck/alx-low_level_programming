#include <stdio.h>

/**
 * main - Entry point
 * Description: program that prints the alphabet in lowercase
 * and then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char index;

	for (index = 'a'; index <= 'z'; index++)
	{
		putchar(index);
	}
	for (index = 'A'; index <= 'Z'; index++)
	{
		putchar(index);
	}
	putchar('\n');
	return (0);
}
