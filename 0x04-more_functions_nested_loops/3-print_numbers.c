#include "main.h"

/**
 * print_numbers - Function that prints base 10 numbers
 * Return: nothing
*/
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
