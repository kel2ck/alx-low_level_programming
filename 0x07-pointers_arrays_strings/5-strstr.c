#include "main.h"

/**
 * _strstr - A function that locates a substring
 * @haystack: main string to be checked
 * @needle:  substring of haystack
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

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
		haystack = a + l;
	}
	return (0);
}
