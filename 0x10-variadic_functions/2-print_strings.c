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
	unsigned int i;
	char *ptr;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(list, char *);

		if (ptr == NULL)
		{
			printf("(nil)");
		}
		printf("%s", ptr);
		if (separator && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
