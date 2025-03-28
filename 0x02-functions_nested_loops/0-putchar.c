#include <stdio.h>
#include <string.h>

/**
 * main - Prints a fixed message
 * Return: Always(0)
*/

int main(void)
{
	char *message = "_putchar";
	size_t i;

	for (i = 0; i < strlen(message); i++)
	{
		putchar(message[i]);
	}
	putchar('\n');

	return (0);
}
