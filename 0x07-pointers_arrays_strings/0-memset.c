#include "main.h"
#include <stdio.h>

/**
 * _memset - A function that fills memory with a constant byte
 * @s: Array to be filled
 * @b: constant byte
 * @n: memory to fill
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}
