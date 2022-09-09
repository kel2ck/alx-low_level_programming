#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char index;

	for (index = '0'; index <= '9'; index++)
	{
		putchar(index);
	}
	putchar('\n');
	return (0);
}
