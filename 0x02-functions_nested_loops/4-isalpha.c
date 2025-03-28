#include "main.h"

/**
 * _isalpha - Checks if a given value is alphabet
 * @c: value to be checked
 * Return: 1 if value is alphabet else 0
*/

int _isalpha(int c)
{
	int ch;

	/* make c lowercase if its uppercase */
	if (!_islower(c))
	{
		c -= 32;
	}

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			return (1);
		}
	}

	return (0);
}
