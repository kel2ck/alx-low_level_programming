#include "main.h"
#include <stdio.h>

/**
 * *_strncat - Function to return concatenate of dest and n byte of src
 * @dest: destination string
 * @src: source string
 * @n: amount of bytes from source string
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, a = 0, b = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		a++;
	}

	for (i = a; b < n && src[b] != '\0'; i++)
	{
		dest[i] = src[b];
		b++;
	}

	dest[i] = '\0';

	return (dest);
}
