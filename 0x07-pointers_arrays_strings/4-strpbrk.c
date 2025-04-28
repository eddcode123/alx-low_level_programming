#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Function that locates the first occuranence of a characters
 * in a set of characters
 * @s: pointer to the string to be scaned
 * @accept: set of characters search in s
 * Return: pointer to the first character that matches
 * else null
*/
char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s != '\0'; s++)
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
	}

	return (NULL);
}
