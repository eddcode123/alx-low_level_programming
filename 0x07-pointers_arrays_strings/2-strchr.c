#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to be checked
 *
 * Return: pointer to the first occurence of character or nothing
 */

char *_strchr(char *s, char c)
{
	/* use while loop to check for character in string */
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
