#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings.
 * @s1: string pointer to compare
 * @s2: string pointer to compare
 *
 * Return: - if less than, + if greater, 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
