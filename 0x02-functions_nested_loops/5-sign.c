#include "main.h"

/**
 * print_sign - the sign of a number
 * @n: number to be checked
 *
 * Return: 1 if positive, 0 if 0, -1 if negative
 */
int print_sign(int n)
{
	/* test for positive numbers */
	if (n > 0)
	{
		/* print positive sign and return 1 */
		_putchar('+');
		return (1);
		_putchar('\n');
	}
	/* check got zero*/
	else if (n == 0)
	{
		/* print zero and return 0 */
		_putchar(48);
		return (0);
		_putchar('\n');
	}
	/* else the value is negative */
	else
	{
		/* print negative sign and return -1 */
		_putchar('-');
		return (-1);
		_putchar('\n');
	}
}
