#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: variable string 1
 * @s2: variable string 2
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	int a;
	int b;
	int len;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a]; a++)
		len++;

	for (a = len, b = 0; s2[b]; a++, b++)
		len++;

	concat = (char *) malloc(sizeof(char) * (len + 1));
	len = 0;

	if (concat == NULL)
		return (NULL);

	for (a = 0; s1[a]; a++)
	{
		concat[a] = s1[a];
		len++;
	}

	for (a = len, b = 0; s2[b]; a++, b++)
	{
		concat[len] = s2[b];
		len++;
	}

	concat[len] = '\0';

	return (concat);
}
