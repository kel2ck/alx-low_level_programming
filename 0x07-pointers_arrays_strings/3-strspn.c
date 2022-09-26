#include "main.h"
#include <stdio.h>

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: variable string to be checked for accept substring
 * @accept: variable substring to check in s
 * Return: initial segment number of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (b = 0; *(s + b); b++)
	{
		for (a = 0; *(accept + a); a++)
		{
			if (*(s + b) == *(accept + a))
				break;
		}
	if (*(accept + a) == '\0')
		break;
	}
	return (b);
}
