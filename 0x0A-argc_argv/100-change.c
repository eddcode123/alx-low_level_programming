#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Compute and print the minimum number of coins to make change
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 if successful, 1 if there's an error
*/
int main(int argc, char **argv)
{
	int i, count, value;
	int coins[] = {25, 10, 5, 2, 1};

	count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* check if the argument is a digit */
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	value = atoi(argv[1]);

	/* compute the minimum coins change to return */
	for (i = 0; i < 5 && value > 0; i++)
	{
		count += value / coins[i];
		value %= coins[i];
	}
	printf("%d\n", count);
	return (0);
}
