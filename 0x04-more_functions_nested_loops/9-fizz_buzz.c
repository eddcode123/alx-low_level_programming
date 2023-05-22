#include <stdio.h>
#include "main.h"

/**
 * main - replaces multiples of 3 & 5 with certain words
 *
 *
 * Return: always 0
 */
int main(void)
{
	/* declare variables */
	int i;
	int n = 100;

	/* use for loop to print numbers */
	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i < 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
