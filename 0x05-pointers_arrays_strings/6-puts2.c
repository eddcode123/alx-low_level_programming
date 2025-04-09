#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to an array of character
 * Return: Nothing
*/

void puts2(char *str)
{
	int len = 0;
	int i;

	/* Compute the length of a string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Create an algorithm to print */
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
