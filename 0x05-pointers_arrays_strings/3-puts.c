#include "main.h"
#include <string.h>

/**
 * _puts - A function that prints a string
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
