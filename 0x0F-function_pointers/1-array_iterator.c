#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - carries out an action to an array.
 * @array: array name.
 * @size: size of array
 * @action: fuction pointer
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	/* iterate through the array */
	for (i = 0; i < size; i++)
	{
		if (action)
			action(array[i]);
	}
}
