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

	/* print base 10 numbers */
	while (a >= 48 && a < 58)
	{
		putchar(a);
		a++;
	}
	/* print newline */
	putchar('\n');
	return (0);
}
