#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that performs arithimetic
 * operation on commandline arguments passed
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
*/
int main(int argc, char **argv)
{
	int (*result)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = get_op_func(argv[2]);

	if (result ==  NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", result(a, b));

	return (0);
}
