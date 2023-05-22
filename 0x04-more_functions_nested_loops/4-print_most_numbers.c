#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 except 2 & 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	/* print 0 - 9 using a loop */
	int i;

	for (i = 0; i < 10; i++)
		/* use if to remove 2 & 4 */
		if (i != 2 && i != 4)
			_putchar('0' + i);
	_putchar('\n');
}
