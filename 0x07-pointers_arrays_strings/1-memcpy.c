#include "main.h"
#include <stdio.h>

/**
 * _memcpy - A function that copies memory area
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}

	return (dest);
}
