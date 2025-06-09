#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Function that multiplies 2 positive integers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
*/
int main(int argc, char **argv)
{
	unsigned int result, i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	/* check if arguments passed are valid digits */
	for (i = 1; i <= 2; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	if (atoi(argv[1]) >= 0 && atoi(argv[2]) >= 0)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}

	return (0);

}
