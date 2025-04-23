#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * cap_string - Function that capitalizes a string
 * @s: string to be capitalized
 * Return: pointer to capitalized string
*/
char *cap_string(char *s)
{
	int cursor = 0, i;
	bool sep = false;
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t'};
	int n = 14;

	while (s[cursor] != '\0')
	{
		/* check for a valid charcters to capitalize */
		if (sep && s[cursor] >= 97 && s[cursor] <= 122)
		{
			s[cursor] -= 32;
		}
		sep = false;
		for (i = 0; i < n; i++)
		{
			if (s[cursor] == spc[i])
			{
				sep = true;
				break;
			}
		}
		cursor++;
	}

	return (s);
}
