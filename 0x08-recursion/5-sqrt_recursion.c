#include "main.h"

int _pow(int x, int n);

/**
 * _sqrt_recursion - computes the square root of a number
 * @n: number to compute
 * Return: -1 or square root of the number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_pow(1, n));

}

/**
 * _pow - helper function to find the square root
 * @x: current number to check
 * @n: number to calculate square root
 * Return: -1 or square root
*/
int _pow(int x, int n)
{
	if (x * x == n)
	{
		return (x);
	}

	if (x * x > n)
	{
		return (-1);
	}

	return (_pow(x + 1, n));
}
