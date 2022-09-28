#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - A function that prints a string, then a new line.
 * @s: string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*(s + 0));
		_puts_recursion((s + 1));
	}
	else
		_putchar('\n');
}
