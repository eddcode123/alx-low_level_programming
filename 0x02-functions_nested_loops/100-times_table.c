#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number upto n
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	/* set boundery to not take < 0 && greater than 15 */
	int i, j, multy;

	if (!(n > 15) && !(n < 0))
	{
		/* use nested for loop to iterate through n */
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				multy = i * j;
				printf("%d", multy);
				if (j < n && multy < 10)
				{
					printf(",   ");
				}
				else if (j < n && !(multy > 99))
				{
					printf(",  ");
				}
				else if (j < n && multy > 99)
				{
					printf(", ");
				}
			}
			printf("\n");
		}
	}
}
