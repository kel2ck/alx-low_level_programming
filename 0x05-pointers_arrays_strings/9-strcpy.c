#include "main.h"
/**
 * _strcpy - Function that copies the string
 * @dest: destination to copy to
 * @src: source to copy from
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
		dest[k] = src[k];
	dest[k] = '\0';
	return (dest);
}
