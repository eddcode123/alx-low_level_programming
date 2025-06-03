#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Mimics the functionality of calloc.
 * @nmemb: number of elements of array
 * @size: size of each element in bytes
 *
 * Return: pointer to array or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *initializer;
	unsigned int total_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	array = malloc(total_size);

	if (!array)
		return (NULL);

	initializer = array;

	for (i = 0; i < total_size; i++)
	{
		initializer[i] = 0;
	}

	return (array);
}
