#include "main.h"

/**
 * print_line - Function that prints a line to the stdout
 * @n: the number of times the line will be printed
 * Return: nothing
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
