#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints its name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
*/
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
