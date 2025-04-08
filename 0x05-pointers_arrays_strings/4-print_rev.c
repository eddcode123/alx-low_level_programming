#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: pointer to an array of characters
 * Return: Nothing
*/

void print_rev(char *s)
{
	int len = 0;

	/* find length of string */
	len = strlen(s);

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
}
