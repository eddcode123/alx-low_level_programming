#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: number of arguments passed
 * @argv: array of strings
 *
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	(void)argv;

	/* print argc excluding name of program */
	printf("%d\n", argc - 1);
	return (0);
}
