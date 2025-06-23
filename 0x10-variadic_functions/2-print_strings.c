#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings passed as arguments
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
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
		/* check if string is null */
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
