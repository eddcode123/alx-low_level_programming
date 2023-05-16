#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* print lowercase alphabet the follow with uppercase using putchar */
	int a = 97;
	int b = 65;

	/* use if statement to print alphabet */
	while (a >= 97 && a < 123)
	{
		putchar(a);
		a++;
	}
	/* print uppercase*/
	while (b >= 65 && b < 91)
	{
		putchar(b);
		b++;
	}
	/* print newline */
	putchar('\n');
	return (0);
}
