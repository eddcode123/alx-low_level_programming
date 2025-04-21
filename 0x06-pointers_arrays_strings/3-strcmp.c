#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: Negative value if s1 < s2, 0 if s1 == s2,
 * Positive value if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int cursor = 0;

	while (s1[cursor] != '\0' && s2[cursor] != '\0')
	{
		if (s1[cursor] != s2[cursor])
		{
			return (s1[cursor] - s2[cursor]);
		}
		cursor++;
	}

	/* Handle cases where strings have different lengths */
	return (s1[cursor] - s2[cursor]);
}
