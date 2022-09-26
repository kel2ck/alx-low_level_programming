#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: variable string to be search
 * @accept: a string given by main
 * Return: a pointer to byte s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; *(accept + b); b++)
		{
			if (*(s + a) == *(accept + b))
			{
				break;
			}
		}
		if (*(accept + b) != '\0')
		{
			return (s + a);
		}
	}
	return (0);
}
