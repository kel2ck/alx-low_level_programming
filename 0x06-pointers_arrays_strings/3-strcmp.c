#include "main.h"
#include <stdio.h>

/**
 * _strcmp - A function that compares two strings.
 * @s1: the first string to compare
 * @s2: the second string to compare
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			return (*s1 - *s2);
		}
	}

	return (0);
}
