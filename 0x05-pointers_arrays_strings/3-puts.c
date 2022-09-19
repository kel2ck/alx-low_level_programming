#include "main.h"
/**
 * _puts - A function that prints a string
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
