#include "main.h"
/**
 * main - Entry point
 * Description: A function that print the alphabet in lowercase.
 * Return: void
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
