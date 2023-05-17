#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* initialize varible a*/
	int i, j, k;

	/* print 3 digit posible combinations of base 10 numbers */
	for (i = 48; i < 58; i++)
	{
		for (j = (i + 1); j < 58; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
