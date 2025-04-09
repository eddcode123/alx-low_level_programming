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

	/* Edege case: A null pointer */
	if (a)
	{
		/* Edge case: A valid number of elements */
		if (n > 0)
		{
			for (i = 0; i < n; i++)
			{
				/* Include comma and space expect the case of last element */
				if (i != n - 1)
				{
					printf("%d, ", a[i]);
				}
				else
				{
					printf("%d\n", a[i]);
				}
			}
		}
	}

}
