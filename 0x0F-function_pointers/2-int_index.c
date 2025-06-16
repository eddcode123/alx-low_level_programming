#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Function that returns the index of the
 * matched element
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer function that checks for a macth
 *
 * Return: -1 if it fails, index of elemet on success
 * or 0 when no matches is found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) > 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}
