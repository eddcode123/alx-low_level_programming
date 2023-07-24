#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	/* declare variables to use */
	int lname, lowner, i;

	/* use malloc to allocate memory to new dog */
	newdog = malloc(sizeof(*newdog));

	/* check if malloc failed */
	if (newdog == NULL || !(name) || !(owner))
	{
		free(newdog);
		return (NULL);
	}
	/* find len of owner and name */
	lname = strlen(name);
	lowner = strlen(owner);
	/* allocate name of newdog size of name */
	newdog->name = malloc(sizeof(lname + 1));
	/* allocate owmer of newdog size of owner */
	newdog->owner = malloc(sizeof(lowner + 1));

	/* check for failure */
	if (!(newdog->name) || !(newdog->owner))
	{
		free((newdog->name));
		free((newdog->owner));
		free(newdog);
		return (NULL);
	}
	/* assign members respectively */
	for (i = 0; i < lname; i++)
		newdog->name[i] = name[i];
	newdog->name[i] = '\0';
	newdog->age = age;
	for (i = 0; i < lowner; i++)
		newdog->owner[i] = owner[i];
	newdog->owner[i] = '\0';
	return (newdog);
}
