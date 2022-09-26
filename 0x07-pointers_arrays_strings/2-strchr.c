#include "main.h"
#include <stdio.h>

/**
 * _strchr - A function that locates a character in a string.
 * @s: string to search for
 * @c: character to search for in the string in s
 * Return: occurence of c or Null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
