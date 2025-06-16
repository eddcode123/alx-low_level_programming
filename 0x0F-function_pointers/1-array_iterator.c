#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Function that makes a callback to
 * array elements
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function to make callback
 *
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (action)
		{
			action(array[i]);
		}
	}
}
