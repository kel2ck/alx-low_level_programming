#include <stdio.h>
/**
 * main - Entry point
 * Description: print all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char index;

	for (index = '0'; index <= '15; index++)
	{
		putchar(index);
	}

	for (index = 'a'; index <= 'f'; index++)
	{
		putchar(index);
	}
	putchar('\n');
	return (0);
}
