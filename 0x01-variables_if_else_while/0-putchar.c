#include <stdio.h>
#include <string.h>

/**
 * main - prints a fixed message
 * Return: Always (0)
*/

int main(void)
{
	char *message = "_putchar";
	size_t i;

	for (i = 0; i < strlen(message); i++)
	{
		_putchar(message[i]);
	}
	_putchar('\n');

	return (0);
}
