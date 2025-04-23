#include "main.h"
/**
 * reverse_array - function reverses elements of an array
 * @a: pointer to the first element of the array
 * @n: number of elements of the array
 * Return: nothing
*/
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n/2; i++)
	{
		temp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = temp;
	}
}
