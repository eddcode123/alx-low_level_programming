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

	/* use if statement to print alphabet */
	while (a >= 97 && a < 123)
	{
		/* use if to exclude q and e */
		if (a != 113 && a != 101)
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
