#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: length of line
 *
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	/* use a for loop */
	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

