#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - checks whether a number is positve or negative
 * Return: Always(0)
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d", n);

	if (n == 0)
	{
		printf(" is zero\n");
	}
	else if (n > 0)
	{
		printf(" is positive\n");
	}
	else
	{
		printf(" is negative\n");
	}

	return (0);
}
