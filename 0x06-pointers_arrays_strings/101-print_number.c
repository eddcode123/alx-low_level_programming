#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer to print
 *
 * Return: nothing
 */

void print_number(int n)
{
	/* print '-' for negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n = n * - 1;
	}
	/* print n */
	if (n == 0)
	{
		_putchar(n);
	}
	/* First remove the last digit of number and print
    the remaining digits using recursion, then print
    the last digit
 */
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
