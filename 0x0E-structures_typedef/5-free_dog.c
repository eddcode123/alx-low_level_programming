#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: dog to be freed
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	/* free d */
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
