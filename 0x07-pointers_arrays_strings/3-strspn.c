#include "main.h"

/**
 * _strspn - Function that calculates the len of the initial string
 * that consist of a set of string
 * @s: pointer to the original string
 * @accept: the set of strings to compare to s
 * Return: length of matched set or 0 if the first character of the
 * original string doesn't match
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] != accept[j])
			{
				return (count);
			}
			count++;
		}
	}

	return (count);
}
