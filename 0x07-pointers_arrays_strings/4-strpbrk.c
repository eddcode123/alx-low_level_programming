#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to string to be checked
 * @accept: pointer to string containing char to match
 *
 * Return: pointer to bytes matched or NULL
 *
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	/* user nested loop to check each character */
	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return ((char *)(s));
			}
			temp++;
		}
		s++;
	}
	return (NULL);
}
