#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for array using malloc
 * @nmemb: size to be allocated
 * @size: size of datatype to use
 *
 * Return: void pointer to allocate memory or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* create a void pointer to array */
	void *array;
	/* variable i for iteration */
	size_t i;
	/* check if nmemb or size is zero */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* allocate memory using malloc */
	for (i = 0; i < nmemb; i++)
	{
		array = malloc(i * sizeof(size));
	}
	/* check if malloc failed */
	if (array == NULL)
		return (NULL);
	return (array);
}
