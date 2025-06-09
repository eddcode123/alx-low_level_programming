#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function that creates an array of integers
 * @min: starting value of array
 * @max: the last value in array
 * Return: pointer to created array or NULL
*/
int *array_range(int min, int max)
{
	int i, *array, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	array = (int *) malloc(size * sizeof(int));

	if (!array)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
