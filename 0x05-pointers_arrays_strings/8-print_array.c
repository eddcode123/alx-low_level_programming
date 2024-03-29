#include <stdio.h>
#include "main.h"

/**
 * print_array -  prints n elements of an array of integers
 * @n: print n elements
 * @a: array name
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	/* print elements of array */
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
