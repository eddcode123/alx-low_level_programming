#include "main.h"
#include <stdio.h>

/**
 * _strchr -  Function locates a character in a string
 * @s: pointer to the string
 * @c: character to search for in the string
 * Return: pointer to the first occurence of character
 * or null
*/
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return ((*s == c) ? s : NULL);
}
