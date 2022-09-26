#include "main.h"
#include <stdio.h>

/**
 * set_string - A function that sets the value of a pointer to a char.
 * @s: variable to change 
 * @to: variable to change s to
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
