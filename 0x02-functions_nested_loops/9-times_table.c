#include "main.h"
/**
 * times_table - Function to return absolute values.
 *Return: 0
 */
void times_table(void)
{
	int digit1;
	int digit2;

	for (digit1 = 1; digit1 <= 9; digit2++)
	{
		_putchar('0');
		for (digit2 = 1; digit2 <= 9; digit2++)
		{
			int result = digit1 * digit2;

			_putchar(',');
			_putchar(' ');
			_putchar('0' + (result / 10));
			_putchar('0' + (result % 10));
		}
		_putchar('\n');
	}
	_putchar('\n');
}
