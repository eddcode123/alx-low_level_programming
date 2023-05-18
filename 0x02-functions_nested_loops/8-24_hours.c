#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	/* create a varibles */
	int j, i, k, l;

	/* use a for loop to print every minute of the day */
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (i > 1 && j > 3)
					{
						break;
					}
					else
					{
						_putchar(i + '0');
						_putchar(j + '0');
					}
					_putchar(':');
					if (l < 10)
					{
						_putchar(k + '0');
						_putchar(l + '0');

					}
					else
						_putchar(l + '0');
					_putchar('\n');

				}
			}
		}
	}
}
