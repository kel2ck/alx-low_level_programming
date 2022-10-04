#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: A string given by the main
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *b;
	int len;
	int a;

	if (str == NULL)
	{
		return ('\0');
	}
	len = strlen(str);
	b = malloc(strlen(str) * sizeof(char) + 1);
	if (b == NULL)
	{
		return ('\0');
	}
	for (a = 0; a < len; a++)
	{
		*(b + a) = str[a];
	}
	return (b);
}
