#include "main.h"
/**
 * _islower - check for lowercase character
 * @c: the char to be checked
 * Return: 1 if its lowercase else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
