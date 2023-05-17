#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	int a = 97;

	while (a > 96 && a < 123)
	{
		_putchar(a);
		a++;
	}
	/* print newline */
	_putchar('\n');
}
