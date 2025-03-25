#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints a fixed message to the standard error
 *
 * Description: Outputs a specific string to standard error
 * using the write system call.
 *
 * Return: Always 1 (Error status)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
