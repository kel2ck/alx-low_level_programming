#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - create a new dog variable
 * @name: name of the dog
 * @age: dog age
 * @owner: owner of the dog
 * Return: a dog object
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int k, len1, len2;
	dog_t *ndog;
	char *a, *b;

	len1 = 0;
	for (k = 0; name[k] != '\0'; k++)
		len1++;
	len2 = 0;
	for (k = 0; owner[k] != '\0'; k++)
		len2++;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	a = malloc((len1 + 1) * sizeof(char));
	if (a == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (k = 0; k < len1; k++)
		a[k] = name[k];
	a[k] = '\0';
	ndog->name = a;
	ndog->age = age;
	b = malloc((len2 + 1) * sizeof(char));
	if (b == NULL)
	{
		free(a);
		free(ndog);
		return (NULL);
	}
	for (k = 0; k < len2; k++)
		b[k] = owner[k];
	b[k] = '\0';
	ndog->owner = b;
	return (ndog);
}
