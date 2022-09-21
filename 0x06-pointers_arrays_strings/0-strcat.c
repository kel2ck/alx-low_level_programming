#include "main.h"
#include <stdio.h>

/**
 * _strcat - A function that concatenates two strings.
 * @dest: the destination string
 * @src: the source string
 * Return: pointer to the string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, a = 0, b = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		a++;
	}

	for (i = a; src[b] != '\0'; 1++)
	{
		dest[i] = src[b];
		b++;
	}

	dest[i] = '\0';

	return (dest);
}
