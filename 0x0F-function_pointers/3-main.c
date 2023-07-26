#include "3-calc.h"

/**
 * main - check code
 * @argc: number of arguments passed
 * @argv: array of strings
 * Return: alway 0
 */

int main(int argc, char **argv)
{
	int a, b;
	int (*opp)(int, int);


	/* check for argument count */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	/* assign address of function pointer */
	opp = get_op_func(argv[2]);

	/* check for null */
	if (opp == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* convert string to integer */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* print result */
	printf("%d\n", opp(a, b));
	return (0);
}
