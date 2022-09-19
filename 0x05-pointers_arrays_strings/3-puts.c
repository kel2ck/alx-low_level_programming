#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _puts - A function that prints a string
 * @str: string to be printed
 * Return: 0 (Success)
 */

void _puts(char *str)
{
	int a;
	int length = strlen(str);

	for (a = 0; a < length; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
