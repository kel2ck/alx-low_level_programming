#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: value to be evaluated
 * Return: 1 if the value is uppercase character
 * 0 if it is not uppercase character
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
