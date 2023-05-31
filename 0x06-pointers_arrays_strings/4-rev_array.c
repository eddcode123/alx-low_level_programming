#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to array
 * @n: number of elements
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	/* print in reverse */
	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
