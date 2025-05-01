#include "main.h"

/**
 * more_numbers - Function that prints 0 - 14 ten times
 * Return: nothing
*/
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(i + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
