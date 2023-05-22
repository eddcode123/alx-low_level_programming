#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 *
 * Return: nothing
 */
void print_square(int size)
{
	/* declare two variables */
	int i, j;

	/* use if to check the condition for size */
	if (size <= 0)
		_putchar('\n');
	else
	{
		/* use nested for loop to print square */
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
