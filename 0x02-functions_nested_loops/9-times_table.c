#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: Nothing
*/
void times_table(void)
{
	int i, j, times;

	times = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j != 9)
			{
				times = i * j;
				_putchar(times + '0');
				_putchar(',');
				_putchar(' ');
			}
			_putchar(times + '0');
		}
		_putchar('\n');
	}

}
