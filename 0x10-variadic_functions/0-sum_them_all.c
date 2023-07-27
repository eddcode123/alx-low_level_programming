#include "variadic_functions.h"

/**
 * sum_them_all - finds sum of all its parameters.
 * @n: arguments count
 *
 * Return: sum of all parameters
 * if n == 0 then return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	/* initialize list */
	va_list(list);

	/* check if in == 0) */
	if (n == 0)
		return (0);
	/* call va_start */
	va_start(list, n);
	/* use for loop to find sum */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);

	return (sum);

}
