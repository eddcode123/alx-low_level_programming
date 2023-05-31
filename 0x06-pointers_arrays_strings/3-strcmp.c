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
	int result, len1 = 0, len2 = 0;

	/* find length of each string */
	len1 = strlen(s1);
	len2 = strlen(s2);
	/* compare the two strings */
	if (len1 < len2)
		result = -15;
	else if (len1 > len2)
		result = 15;
	else
		result = 0;
	return (result);
}
