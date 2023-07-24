#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog or null
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* create a new dog pointer */
	dog_t *newdog;

	/* use malloc to allocate memory to new dog */
	newdog = malloc(sizeof(dog_t));

	/* check if malloc failed */
	if (newdog == NULL)
		return (NULL);

	/* assign members respectively */
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
