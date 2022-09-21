#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *cap_string - A function that capitalizes all words of a string.
 * @s: String to be change to uppercase
 * Return: Always 0
 */
char *cap_string(char *s)
{
	while (*s != '\0')
	{
		if (*s >= 65 && *s <= 90)
		{

		}
		else if (*s >= 97 && *s <= 122)
		{
			*s = *s - 32;
		}
		s++;
	}
	return (0);
}
