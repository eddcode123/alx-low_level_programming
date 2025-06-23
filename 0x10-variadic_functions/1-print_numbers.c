#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Function that prints numbers passed as
 * arguments
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n > 0)
	{
		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			if (separator && i < (n - 1))
			{
				printf("%d%s", va_arg(list, int), separator);
			}
			else
			{
				printf("%d", va_arg(list, int));
			}
		}
		printf("\n");
	}
}
