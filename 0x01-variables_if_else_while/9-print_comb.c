#include <stdio.h>
/**
 * main - Entry point
 * Descrption:  print all possible combinations of single digit number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int index;

	for (index = 48; index <= 57; index++)
	{
		putchar(index);

		if (index == 57)
		{
			break;
		}
			putchar(',');
			putchar(' ');
	}

	putchar('\n');
	return (0);
}
