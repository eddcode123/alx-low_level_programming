#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: pointer to an array of characters
 * Return: Nothing
*/

void print_rev(char *s)
{
	int len = 0;
	char *string = s;

	while (*s != '\0')
	{
		/* find length of string */
		s++;
		len++;
	}

	while (len > 0)
	{
		len--;
		_putchar(string[len]);
	}
	_putchar('\n');

}
