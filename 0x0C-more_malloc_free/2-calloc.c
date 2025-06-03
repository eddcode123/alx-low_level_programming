#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * calloc - Fucumction that mimics calloc
 * @nmemb: number of elements of array
 * @size: size of each element in bytes
 *
 * Return: pointer to array or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	array = malloc(nmemb * sizeof(size));

	if (!array)
		return (NULL);


	return (array);
}
