#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to string
 *
 * Return: pointer to resulting string
 */

char *rot13(char *s)
{
	char *p = s;
	int i = 0, j = 0;

	/* loop through string */
	while (p[i] != '\0')
	{
		if ((p[i] + 13) <= 'z' || (p[i] + 13) <= 'Z')
		{
			p[i] += 13;
		}
		else
		{
			while ((p[j] + 13) > 'z' || (p[j] + 13) > 'Z')
			{
				p[j] = (p[j] + 13) - 32;
				j++;
			}
		}
		i++;

	}
	return (s);
}
