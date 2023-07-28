#include "variadic_functions.h"

/**
 * print_strings - prints string followed by new line.
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	/* declare a list */
	va_list(args);
	unsigned int i;
	char *ptr;

	va_start(args, n);
	/* use a loop to iterate through arguments */
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char *);
		/* check if dtring is null */
		if (ptr != NULL)
			printf("%s", ptr);
		else
			printf("(nil)");
		if (separator != NULL)
			if (i < n - 1)
				printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
