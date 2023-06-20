#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: number powered to y
 * @y: power of x
 *
 * Return: value after power
 */

int _pow_recursion(int x, int y)
{
	int pow;

	/* set base case */
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	else
	{
		pow = x * _pow_recursion(x, y - 1);
		return (pow);
	}
}
