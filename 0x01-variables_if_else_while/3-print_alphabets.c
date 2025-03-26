#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* Print lowercase and uppercase alphabets */
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	/* Print a newline at the end */
	putchar('\n');

	return (0);
}
