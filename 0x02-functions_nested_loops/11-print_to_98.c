#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers
 * from n to 98
 * @n: value to work with
 * Return: integer value
 */
void print_to_98(int n)
{
	for (n = -111; n <= 98; n++)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
