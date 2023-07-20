#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: struct dog object
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	/* check if d is null */
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		printf("Name: (nill)\n");
	if ((*d).age == 0)
		printf("Age: (nill)\n");
	if ((*d).owner == NULL)
		printf("Owner: (nill)\n");
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
