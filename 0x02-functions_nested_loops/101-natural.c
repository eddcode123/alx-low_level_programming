#include <stdio.h>
#include "main.h"

/**
 * main -  prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: always 0
 */
int main(void)
{
	/* declare and initialize some variables */
	long int sum = 0;
	int i;

	/* use for loop to iterate through n */
	for (i = 0; i < 1024; i++)
	{
		/* use if to check for multi of 3 || 5 */
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	/* print sum */
	printf("%ld\n", sum);
	return (0);
}
