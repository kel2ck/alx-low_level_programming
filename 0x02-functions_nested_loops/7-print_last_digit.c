#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: integer value
 * Return: last digit
 */
int print_last_digit(int n)
{
	int digit = n % 10;

	if (n < 0)
		digit = digit * -1;
	_putchar(digit + '0');
	return (digit);
}
