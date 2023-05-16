#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* print the alphabet from z to a in lowercase using putchar */
	int a = 122;

	/* use if statement to print alphabet */
	while (a <= 122 && a > 96)
	{
		putchar(a);
		a--;
	}
	/* print a newline */
	putchar('\n');
	return (0);
}
