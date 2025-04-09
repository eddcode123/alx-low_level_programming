#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to an array of characters
 * Return: Nothing
*/

void puts_half(char *str)
{
	int len = 0;
	int i;

	/* Compute length of a string */
	while (str[len] != '\0')
	{
		len++;
	}
	/* Algorithm to print second half of the string */
	for (i = (len + 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
