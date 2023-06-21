#include <stdio.h>

/**
 * main - print all arguments passed
 * @argc: number of arguments passed
 * @argv: array of strings
 *
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	/* use for loop to print argumrents */
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
