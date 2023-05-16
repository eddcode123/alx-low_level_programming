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
	int b = 97;

	/* print base 16 numbers */
	while (a >= 48 && a < 58)
	{
		putchar(a);
		a++;
	}
	while (b >= 97 && b < 103)
	{
		putchar(b);
		b++;
	}
	/* print newline */
	putchar('\n');
	return (0);
}
