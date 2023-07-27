#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by new line.
 * @separator: string to print between numbers.
 * @n: total arguments passed to function.
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* initialize list */
	va_list(args);
	unsigned int i;
	/* call va_start */
	va_start(args, n);
	/* use for loop to print args passed */
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d\n", va_arg(args, int));
		if (i != (n - 1))
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d\n", va_arg(args, int));
	}
}
