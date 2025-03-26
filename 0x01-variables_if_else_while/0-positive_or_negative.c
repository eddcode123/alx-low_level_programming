#include <stdlib.h>
#include <time.h>
/**
 * main - Generates a random number and prints whether
 *        it is positive, negative, or zero.
 * Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("is negative\n");
	}
	else if (n > 0)
	{
		printf("is positive\n");
	}
	else
	{
		printf("is zero\n");
	}

	return (0);
}
