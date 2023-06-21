#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies to numbers and prints result
 * @argc: number of arguments passed
 * @argv: array of strings
 *
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	int i, multy = 1;

	/* check if the argumets passed are two */
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			multy *= atoi(argv[i]);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", multy);
	return (0);
}
