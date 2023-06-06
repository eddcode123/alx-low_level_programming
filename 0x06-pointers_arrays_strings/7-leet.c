#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: pointer to string
 *
 * Return: pointer to resulting
 */

char *leet(char *s)
{
	char *ps = s;

	/* loop through string to check for characters */
	while (*ps != '\0')
	{
		if (*ps == 'e' || *ps == 'E')
		{
			*ps = 51;
		}
		else if (*ps == 'a' || *ps == 'A')
		{
			*ps = 52;
		}
		else if (*ps == 'o' || *ps == 'O')
		{
			*ps = 48;
		}
		else if (*ps == 't' || *ps == 'T')
		{
			*ps = 55;
		}
		else if (*ps == 'l' || *ps == 'L')
		{
			*ps = 49;
		}
		ps++;
	}

	return (s);
}
