#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array name.
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/* integer to loop through array */
	int i;
	/* check if size is zero or less */
	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	/* iterate through array */
	for (i = 0; i < size; i++)
		/* check if values are equal */
		if (cmp(*(array + i)))
			return (i); /* if true return the ith index */
	return (-1); /* return -1 if false */
}
