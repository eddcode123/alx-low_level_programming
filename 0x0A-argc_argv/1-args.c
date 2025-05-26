#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: argument count
*/
int main(int argc,  char **argv)
{
	(void)argv;
	return (argc - 1);
}
