#include "main.h"
/**
 * print_alphabet - start
 * Description: A function that print the alphabet in lowercase.
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
