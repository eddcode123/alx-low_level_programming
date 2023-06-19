#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: number to find factorial
 *
 * Return: returns the factorial of a given number & -1 for negative
 *
 */

int factorial(int n)
{
	/* set base case */
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
