#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: 1 if ascii value is greater,
 * 0 is the string is equal, -1 if ascii
 * value is less
*/
int _strcmp(char *s1, char *s2)
{
	int cursor = 0;

	while (s1[cursor] != '\0')
	{
		if (s1[cursor] > s2[cursor])
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}

	return (0);
}
