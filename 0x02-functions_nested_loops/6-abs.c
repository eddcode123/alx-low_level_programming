#include "main.h"
/**
 * _abs - Computes the absolute value of a integer
 * @n: Number to be computed
 * Return: The absolute value of n
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}

	return (n);
}
