#include "main.h"

/**
 * _strstr - A function that locates a substring
 * @haystack: main string to be checked
 * @needle:  substring to be checked
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *i;
	char *j;

	while (*haystack != '\0')
	{
		i = haystack;
		j = needle;

		while (*haystack != '\0' && *j != '\0' && *haystack == *j)
		{
			haystack++;
			j++;

		}
		if (!*j)
			return (i);
		haystack = i + 1;
	}
	return (0);
}
