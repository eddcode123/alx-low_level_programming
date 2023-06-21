#include <stdio.h>
#include <stdlib.h>

/**
 * main -  adds positive numbers
 * @argc: number of arguments passed
 * @argv: array of strings
 *
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	int i, temp, sum = 0;

	/* check if more than one arguments are passed */
	if (argc != 0)
	{
		for (i = 1; i < argc; i++)
		{
			temp = atoi(argv[i]);
			if (temp > 0)
			{
				sum += temp;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else
	{
		printf("%d\n", 0);
	}
	printf("%d\n", sum);
	return (0);
}
