#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that computes sum of all arguments passed
 * @n: number of arguments to be passed
 *
 * Return: sum of args or 0 if n is 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list list;

	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);

	return (sum);
}
