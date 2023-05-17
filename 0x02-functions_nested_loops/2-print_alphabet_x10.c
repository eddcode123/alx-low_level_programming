#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10.
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int a, i;

	/* use for loop to print 10 times */
	for (i = 1; i <= 10; i++)
	{
		for (a = 97; a < 123; a++)
		{
			_putchar(a);
		}
		/* print newline */
		_putchar('\n');
	}
}
