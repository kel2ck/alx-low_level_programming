#include "main.h"
#include <stdio.h>

/**
 * _strstr - A function that locates a substring
 * @haystack: main string to be checked
 * @needle:  substring of haystack
 * Return: pointer to the beginning of substring or
 * Null if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;

		while (*haystack != '\0' && *b != '\0' && *haystack == *b)
		{
			haystack++;
			b++
		}
		if (b == '\0')
			return (a);
		haystack = a + 1;
	}
	return (0);
}
