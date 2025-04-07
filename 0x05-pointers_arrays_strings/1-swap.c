#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: pointer to the first value
 * @b: pointer to the second value
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
