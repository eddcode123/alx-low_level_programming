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
	int len1, len2, i;

	/* check if strings are empty */
	if (s1 == NULL || s2 == NULL)
		return (-1);

	/* find len of strings */
	len1 = strlen(s1);
	len2 = strlen(s2);

	/* compare lens */
	if (len1 > len2)
		return (len1 - len2);
	else if (len1 < len2)
		return (len1 - len2);

	/* loop through strings and compare charactres */
	for (i = 0; i < len1; i++)
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return (1);
	}

	return (0);
}
