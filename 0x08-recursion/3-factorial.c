#include "main.h"

/**
 * factorial - computes the factorial of a given number
 * @n: number to be computed
 * Return: factorial  of the given number or -1
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	/* base case */
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
