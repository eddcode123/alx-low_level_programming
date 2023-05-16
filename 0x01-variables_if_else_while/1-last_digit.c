#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* find last digit of a number */
	lastdigit = n % 10;

	/* print output to user */
	printf("Last digit of %d is", n);
	/* check if x is greater than 5 */
	if (lastdigit > 5)
	{
		printf(" %d and is greater than 5\n", lastdigit);
	}
	/* check if is less than 6 and not 0 */
	else if (lastdigit < 6 && lastdigit != 0)
	{
		printf(" %d and is less than 6 and not 0\n", lastdigit);
	}
	/* check if the last digit is zero */
	else if (lastdigit == 0)
	{
		printf(" %d and is 0\n", lastdigit);
	}
	return (0);
}
