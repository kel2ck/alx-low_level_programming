#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * true_palindrome - function to check if string is palindrome
 * @s: The string to be measured
 * @a: first position in string
 * @b: last position in string
 * Return: if the string is a palidrome - 1
 *         if the string is not a palindrome - 0
 */
int true_palindrome(char *s, int a, int b)
{
	if (*(s + a) != *(s + b))
		return (0);
	if (a < b - 1)
		return (true_palindrome(s, (a + 1), (b - 1)));

	return (1);
}

/**
 * is_palindrome - Function to check string is palindrome
 * @s: The string to be checked.
 *
 * Return: if the string is a palidrome - 1
 *         if the string is not a palindrome - 0
 */
int is_palindrome(char *s)
{
	int lenght = strlen(s) - 1;

	if (lenght == 0 || lenght == 1)
		return (1);
	return (true_palindrome(s, 0, lenght));
}
