#include <stdio.h>
/**
 * main - Entry point
 * Descrption:  print all possible combinations of single digit number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int index;

	for (index = 0; index <= 9; index++)
	{
		putchar(index % 10 + '0');
		if(index ! = 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
