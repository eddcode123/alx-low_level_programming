#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function that adds the numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
*/
int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
