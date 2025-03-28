#include <stdio.h>
#include <string.h>

/**
 * main - prints a fixed message
 * Return: Always (0)
*/

int main(void)
{
	char *message = "_putchar";
	int i;

	for (i = 0; i < strlen(message); i++)
	{
		putchar(message[i]);
	}
	putchar('\n');

	return (0);
}
