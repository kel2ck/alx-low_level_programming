#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Function that prints 10 times the numbers
 * from 0 to 14 followed by a new line
 * Return: void
 */

void more_numbers(void)
{
	int i, k;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 15; k++)
		{
			if (k >= 10)
				_putchar((k / 10) + 48);
			_putchar((k % 10) + 48);
		}
		_putchar('\n');
	}
}
