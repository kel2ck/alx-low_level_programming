#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * exclude 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if ((i == 50) || (i == 52))
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}

	_putchar('\n');
}
