#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *string_toupper - Function that changes lowercase letters to uppercase.
 * @i: string to be checked
 * Return: Always 0
 */

char *string_toupper(char *i)
{
	int j;

	for (j = 0; i[j] != '\0'; j++)
	{
		if (i[j] >= 'a' && i[j] <= 'z')
		{
			i[j] = i[j] - 32;
		}
	}

	return (i);
}
