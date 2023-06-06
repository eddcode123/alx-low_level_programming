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

	/* use a while loop to ilterate through each character */
	while (*p != '\0')
	{
		/* check if char is between a-m 0r A-M */
		if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M'))
		{
			/* add 13 to rotate */
			*p += 13;
		}
		 /* check if char is between n-z 0r N-Z */
		else if ((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
		{
			/* minus 13 to rotate */
			*p -= 13;
		}
		p++;
	}

	return (s);
}
