#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* initialize varible a*/
	int a = 48;

	/* print base 10 numbers separated by space and , */
	while (a >= 48 && a < 58)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	/* print newline */
	putchar('\n');
	return (0);
}
