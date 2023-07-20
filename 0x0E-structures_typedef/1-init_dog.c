#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to initialized variable
 * @name: member one
 * @age: member two
 * @owner: member three
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* initializing d with using struct dog */
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
