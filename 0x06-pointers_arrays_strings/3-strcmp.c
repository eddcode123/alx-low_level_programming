#include "main.h"
#include <string.h>

/**
 * _strcmp -  compares two strings.
 * @s1: pointer to string for comparision
 * @s2: pointer to string for comparision
 *
 * Return: result of the comparision
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
