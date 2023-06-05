#include "main.h"
#include <stdio.h>

/**
* reverse_array -> reversing an array
* @a: array a
* @n: an element of an array
*/
void reverse_array(int *a, int n)
{
	int i = 0, temp;
	int size = n - 1;

	/* use while loop to swap values of a */
	while (i < size)
	{
		temp = a[i];
		a[i] = a[size];
		a[size] = temp;
		i++;
		size--;
	}
}
