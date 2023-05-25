#include "main.h"

/**
 * swap_int - swap value two integers
 * @a: values to be swapped
 * @b: values to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	/* add a new variable to store value temp */
	int temp;

	/* swap values */
	temp = *a;
	*a = *b;
	*b = temp;
}
