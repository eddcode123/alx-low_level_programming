#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog -  Fuction that creates a dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the dogs owner
 *
 * Return: pointer to created object or NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_pup;

	if (!name || !owner)
	{
		return (NULL);
	}

	new_pup = malloc(sizeof(dog_t));

	if (!new_pup)
	{
		return (NULL);
	}

	new_pup->name = malloc(strlen(name) + 1);
	new_pup->owner = malloc(strlen(owner) + 1);

	if (!new_pup->name || !new_pup->owner)
	{
		free(new_pup->name);
		free(new_pup->owner);
		free(new_pup);
		return (NULL);
	}

	strcpy(new_pup->name, name);
	strcpy(new_pup->owner, owner);
	new_pup->age = age;

	return (new_pup);
}
