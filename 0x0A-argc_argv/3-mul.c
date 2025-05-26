#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that computes the multiplication of two arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
*/

int main(int argc, char **argv)
{

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
