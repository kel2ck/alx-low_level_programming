#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - A function that allocates memory for an array using malloc
 * @nmemb: number of elements int the array
 * @size: size of each element
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0;
	int b = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;
	p = malloc(b);

	if (p == NULL)
		return (NULL);

	while (a < b)
	{
		p[a] = 0;
		a++;
	}

	return (p);
}
