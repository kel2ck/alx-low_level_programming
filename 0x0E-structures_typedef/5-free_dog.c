#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function that frees any memory allocated by dogs.
 * @d: struct dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
