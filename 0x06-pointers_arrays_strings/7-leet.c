#include "main."

/**
 * leet - A function that encodes a string into 1337.
 * @str: string to be encoded
 * Return: Always 0
 */

char *leet(char *str)
{
	int i = 0;
	int n;
	char leet[8] = {'0', 'l', '?', 'E', 'A', '?' '?', 'T'};

	while (str[i])
	{
		for (n = 0; n <= 7; n++)
		{
			if (str[i] == leet[n] ||
					str[i] - 32 == leet[n])
				str[i] = n + '0';
		}
		i++;
	}
	return (str);
}
