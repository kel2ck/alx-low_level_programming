#include "main.h"

/**
 * leet - A function that encodes a string into 1337.
 * @i: string to be encoded
 * Return: Always 0
 */

char *leet(char *i)
{
	int a = 0;
	int b = 0;
	int l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', 'l'}

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
