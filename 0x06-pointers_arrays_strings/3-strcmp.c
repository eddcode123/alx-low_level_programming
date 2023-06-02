#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: string pointer to compare
 * @s2: string pointer to compare
 *
 * Return: - if less than, + if greater, 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
		s1++;
		s2++;
	}

	return (0);
}
