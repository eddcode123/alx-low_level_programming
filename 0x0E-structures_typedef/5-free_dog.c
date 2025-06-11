#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -Function that free a dog object
 * @d: pointer to dog object
 *
 * Return: Nothing
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
