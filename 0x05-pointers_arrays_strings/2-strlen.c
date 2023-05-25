#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to be checked
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int count = 0, i;

	/* use a while loop to find length of string */
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
