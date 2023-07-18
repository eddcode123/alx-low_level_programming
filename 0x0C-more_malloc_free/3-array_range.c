#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: pointer to new array created
 * if min > max, return NULL
 * if malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	/* create pointer to array */
	int *a;
	int i, size;
	/* check if min is > max */
	if (min > max)
		return (NULL);
	/* find size of array */
	size = max - min;
	/* allocate memory for array with malloc */
	a = malloc((size + 1) * sizeof(*a));

	/* chech if malloc failed */
	if (a == NULL)
		return (NULL);

	/* create an array of size max */
	for (i = 0; i < size + 1; i++, min++)
	{
		if (min <= max)
			a[i] = min;
	}

	return (a);
}
