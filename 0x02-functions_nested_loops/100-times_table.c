#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: The number to print its multiples
 * Return: Nothing
*/
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j != n)
			{
				printf("%d, ", (i * j));
			}
			else
			{
				printf("%d\n", (i * j));
			}
		}
	}
}
