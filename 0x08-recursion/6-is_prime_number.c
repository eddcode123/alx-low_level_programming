#include "main.h"
int helper(int x, int n);

/**
 * is_prime_number - Function that checks if a number is a prime
 * number
 * @n: number to be checked
 * Return: 1 if true otherwise 0
*/
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (helper(2, n));
}

/**
 * helper - Recursively checks if a number is divisible by any number
 * @x: current divisor to test
 * @n: number to check
 * Return: 1 if prime, 0 otherwise
*/

int helper(int x, int n)
{
	if (n % x == 0)
	{
		return (0);
	}
	if (x * x > n)
	{
		return (1);
	}

	return (helper(x + 1, n));

}
