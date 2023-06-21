#include <stdio.h>

/**
 * main - print the name of program
 * @argc: argument cout
 * @argv: array of strings
 *
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	/* print argv[argc - 1] */
	printf("%s\n", argv[argc - 1]);
	return (0);
}
