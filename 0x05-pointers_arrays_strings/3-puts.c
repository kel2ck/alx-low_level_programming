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
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
