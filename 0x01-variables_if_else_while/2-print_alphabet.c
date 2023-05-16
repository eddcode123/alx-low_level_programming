#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* print the alphabet from a to z in lowercase using putchar */
	int a = 97;

	/* use if statement to print alphabet */
	while (a >= 97 && a < 123)
	{
		putchar(a);
		a++;
	}
	/* print a newline */
	putchar('\n');
	return (0);
}
