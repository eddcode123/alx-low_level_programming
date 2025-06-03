#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory dynamically
 * @b: size of space to allocate
 * Return: nothing
*/
void *malloc_checked(unsigned int b)
{
	unsigned int size = malloc(b * sizeof(unsigned int));

	if (!size)
	{
		exit(98);
	}

	return (size);
}
