#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * puts2 - A function that prints every other character of a string
 * @str: input string
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = strlen(str) - 1; i >= 0; i += 2)
	{
		_putchar(str[i]);
	}
}
