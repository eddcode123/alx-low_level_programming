#include <stdio.h>
/**
 * main - Prints the entire alphabet in lowercase letters
 * Return: Always (0)
*/
int main(void)
{
	int alpha;

	for (alpha = 97; alpha < 123; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
