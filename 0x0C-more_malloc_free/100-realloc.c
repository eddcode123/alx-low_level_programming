#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Fuction that mimics the functionality of realloc
 * @ptr: pointer to previous allocated memory
 * @old_size: size of the old memory
 * @new_size: size of the new memory
 * Return: pointer to reallocated memory or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;
	unsigned int size, i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (!ptr)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ptr1 = malloc(new_size);

	if (!ptr1)
	{
		return (NULL);
	}

	size = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < size; i++)
	{
		((char *)ptr)[i] = ((char *)ptr1)[i];
	}

	free(ptr);
	return (ptr1);
}
