#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of a random number
 *        and checks whether it is greater than 5,
 *        less than 6 and not 0, or exactly 0.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* find the last digit of n */
	last_digit = n % 10;
	/* Print the last digit and determine its properties */
	printf("Last digit of %d is %d and is ", n, last_digit);

	if (last_digit > 5)
	{
		printf("greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);

}
