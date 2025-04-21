#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point. Generates a random password with a sum of 2772.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char c;
	int x = 0;

	srand(time(0));

	while (x <= 2645)
	{
		c = (rand() % 94) + 32;
		x += c;
		putchar(c);
	}

	putchar(2772 - x);
	return (0);
}
