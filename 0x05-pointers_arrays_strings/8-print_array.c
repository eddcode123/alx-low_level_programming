#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array
 * @a: pointer to the first element in array
 * @n: The number of elemensts to be printed
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int i;

	/* Edege case: A valid pointer */
	if (a)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i < n - 1)
			{
				printf(", ");
			}
		}
		_putchar('\n');
	}

}
