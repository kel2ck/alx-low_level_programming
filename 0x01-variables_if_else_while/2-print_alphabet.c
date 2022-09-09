#include <stdio.h>

/**
 * main - Entry point
 * Description: print the alphabet in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char index;

	for (index = 'a'; index <= 'z'; index++)
	{
		putchar(index);
	}
	putchar('\n');
	return (0);
}
