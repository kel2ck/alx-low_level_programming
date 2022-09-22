#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * leet - A leet function that encodes a string
 * @i: param i
 * Return: a string
 */

char *leet(char *i)
{
	int a = 0;
	int b = 0;
	int l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (i[a])
	{
		b = 0;

		while (b < l)
		{
			if (i[a] == tr[b] || i[a] - 32 == tr[b])
				i[a] = trw[b];
			b++;
		}
		a++;
	}
	return (i);
}
