#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * wildcmp - A function that compares two strings
 * @a: first string
 * @b: second string
 * Return: 0
 */

int wildcmp(char *a, char *b)
{
	if (*a == '\0')
	{
		if (*b != '\0' && *b == '*')
		{
			return (wildcmp(a, b + 1));
		}
		return (*b == '\0');
	}

	if (*b == '*')
	{
		return (wildcmp(a + 1, b) || wildcmp(a, b + 1));
	}

	else if (*a == *b)
	{
		return (wildcmp(a + 1, b + 1));
	}
	return (0);
}
