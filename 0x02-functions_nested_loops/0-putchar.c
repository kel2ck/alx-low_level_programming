#include "main.h"

/**
 * main - Entry point
 * Description: A program that prints _putchar
 * Return: 0 (Success)
 */
int main(void)
{
	char *main = "_putchar";

	while (*main)
	{
		_putchar(*main);
		main++;
	}
	_putchar('\n');
	return (0);
}
