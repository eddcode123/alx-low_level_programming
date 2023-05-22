#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * Retrun: nothing
 */
void print_triangle(int size)
{
	/* declare variables */
	int  i, j, k;

	/* use if to check condition */
	if (size <= 0)
		_putchar('\n');
	else
	{
		/* use nested loop to print triangle */
		for (i = 1; i <= size; i++)
		{
			for (j = size  - 1; j >= i; j--)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
