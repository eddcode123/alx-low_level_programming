#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Function that initializes a struct
 * @d: pointer to the dog struct to initialize
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: the name of the owner of the dog
 * Return: Nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name && owner)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
