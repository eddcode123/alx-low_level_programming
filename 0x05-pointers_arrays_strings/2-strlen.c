#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to be checked
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int count = 0;

	/* use a while loop to find length of string */
	while (*s != '\0')
	{
		s++;
		count += 1;
	}
	return (count);
}
