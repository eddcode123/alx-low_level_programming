#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @x: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int x)
{
	/* find last digit of a number */
	int b = x % 10;

	/* use if to check and covert negative to positive */
	if (b < 0)
		b *= -1;

	_putchar(b + '0');

	return (b);
}
