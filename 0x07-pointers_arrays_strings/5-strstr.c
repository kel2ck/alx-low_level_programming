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
	char *string1;
	char *string2;

	while (*haystack != '\0')
	{
		string1 = haystack;
		string2 = needle;

		while (*haystack != '\0' && *string2 != '\0' && *haystack == *string2)
		{
			haystack++;
			string2++
		}
		if (string2 == '\0')
			return (string1);
		haystack = string1 + 1;
	}
	return (0);
}
