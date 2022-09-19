#include "main.h"
/**
 * _puts - A function that prints a string
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (str[len] != '\0')
		{
			-putchar(str[len]);

			len++;
		}
	}

	_putchar('\n');
}
