#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * rev_string - Function that reverse a string
 * @str: the string to reverse
 * Return: of i
 */
void rev_string(char *str)
{
	int len = strlen(str);
	int i, temp;

	for (i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;

	}
}
