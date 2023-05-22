#include "main.h"

/**
 * print_numbers - prints 0 - 9 followed by newline
 *
 * Return: nothing
 */
void print_numbers(void)
{
	/* print 0 - 9 using a loop */
	int i;

	for (i = 0; i < 10; i++)
		_putchar('0' + i);
	_putchar('\n');
}
