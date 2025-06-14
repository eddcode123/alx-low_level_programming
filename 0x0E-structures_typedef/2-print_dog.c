#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Function that prints the members of a dog object
 * @d: pointer to the object
 *
 * Return: Nothing
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", ((d->name) ? d->name : "(nil)"));
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", ((d->owner) ? d->owner : "(nil)"));
	}
}
