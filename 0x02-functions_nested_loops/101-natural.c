#include <stdio.h>
#include "main.h"

/**
 * multisum35 - computes and prints the sum of all the multis of 3 or 5 < 1024
 * @n: range for count
 *
 * Return: nothing
 */
void multisum35(void)
{
	/* declare and initialize some variables */
	int sum = 0, i;
	int n = 10;

	/* use for loop to iterate through n */
	for (i = 0; i < n; i++)
	{
		/* use if to check for multi of 3 || 5 */
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	/* print sum */
	printf("sum is: %d", sum);
}
