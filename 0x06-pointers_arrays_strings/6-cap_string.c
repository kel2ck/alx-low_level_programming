#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *cap_string - A function that capitalizes all words of a string.
 * @s: String to be change to uppercase
 * Return: Always 0
 */
char *cap_string(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] = (char) (s[i] + ('A' - 'a'));
			else if (s[i - 1] == ',' || s[i - 1] == ';')
				s[i] = (char)(s[i] + ('A' - 'a'));
			else if (s[i - 1] == '.' || s[i - 1] == '!')
				s[i] = (char)(s[i] + ('A' - 'a'));
			else if (s[i - 1] == '?' || s[i - 1] == '\"')
				s[i] = (char)(s[i] + ('A' - 'a'));
			else if (s[i - 1] == '(' || s[i - 1] == ')')
				s[i] = (char)(s[i] + ('A' - 'a'));
			else if (s[i - 1] == '{' || s[i - 1] == '}')
				s[i] = (char)(s[i] + ('A' - 'a'));
			else if (s[i - 1] == ' ' || s[i - 1] == '\t')
				s[i] = (char)(s[i] + ('A' - 'a'));
			else if (s[i - 1] == '\n')
				s[i] = (char)(s[i] + ('A' - 'a'));
		}
	}
	return (s);
}
