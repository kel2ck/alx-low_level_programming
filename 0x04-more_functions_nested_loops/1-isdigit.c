#include "main.h"

/**
 * _isdigit - Function that checks for a digit from 0 to 9
 * @c: input value
 * Return: 1 if the value occurs between 0 and 9
 * 0 if the value does not occur between 0 and 9
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
