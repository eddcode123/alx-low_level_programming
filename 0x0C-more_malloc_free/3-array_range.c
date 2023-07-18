#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: starting value to enter in array
 * @max: size of array
 *
 * Return: pointer to new array created or null
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
	a = malloc(size * sizeof(a) + 1);

	/* chech if malloc failed */
	if (a == NULL)
		return (NULL);

	/* create an array of size max */
	for (i = 0; min <= max; i++, min++)
	{
		a[i] = min;
	}

	return (a);
}
