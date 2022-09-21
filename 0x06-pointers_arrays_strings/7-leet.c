#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - A function that encodes a string into 1337.
 * @str: string to be encoded
 * Return: Always 0
 */

char *leet(char *str)
{
	int k = 0;
	int n;
	char leet[8] = {'0', 'l', '?', 'E', 'A', '?' '?', 'T'};

	while (str[k])
	{
		for (n = 0; n <= 7; n++)
		{
			if (str[k] == leet[n] ||
					str[k] - 32 == leet[n])
				str[k] = n + '0';
		}
		k++;
	}
	return (str);
}
