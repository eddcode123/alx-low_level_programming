#include "main.h"

/**
 * print_square - Function that prints a square to the standard out
 * @size: the size of the square
 * Return: nothing
*/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
