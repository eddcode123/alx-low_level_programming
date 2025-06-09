#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function that creates an array of integers
 * @min: starting value of elements
 * @max: the last element
 * Return: pointer to created array or NULL
*/
int *array_range(int min, int max)
{
	int i, *array, size;

	if (min > max)
	{
		return (NULL);
	}

	if (min == 0)
	{
		size = max + 1;
	}
	else
	{
		size = max;
	}

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
