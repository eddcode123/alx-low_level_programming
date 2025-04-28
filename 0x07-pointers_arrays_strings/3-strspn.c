#include "main.h"

/**
 * _strspn - Function that calculates the length of the initial segment of `s`
 * that consists only of characters in `accept`.
 * @s: pointer to the original string.
 * @accept: the set of characters to compare to `s`.
 * Return: length of the matched segment.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int match_found;

	for (i = 0; s[i] != '\0'; i++)
	{
		match_found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match_found = 1;
				break;
			}
		}
		if (!match_found)
		{
			break;
		}
		count++;
	}

	return (count);
}
