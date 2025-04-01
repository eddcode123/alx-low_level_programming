#include "main.h"
/**
 * _abs - Computes the absolute value of a number
 * @n: Number to be computed
 * Return: Absolute number
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}

	return (n);
}
