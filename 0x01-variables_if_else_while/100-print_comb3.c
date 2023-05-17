#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* initialize varible a*/
	int i, j;

	/* print all posible combinations of base 10 numbers */
	for (i = 48; i < 58; i++)
	{
		for (j = (i + 1); j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
