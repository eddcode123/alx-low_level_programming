#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: pointer to an array of characters
 * Return: Nothing
*/

void print_rev(char *s)
{
	int len = 0;

	/* calculate length of string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Reverse string */
	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}
	_putchar('\n');
}
