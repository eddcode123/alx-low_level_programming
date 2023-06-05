#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: pointer to a string
 *
 * Return: pointer to resulting string
 */

char *string_toupper(char *s)
{
	char *p = s;

	/* loop through string b4 null and check for lowercase */
	while (*p != '\0')
	{
		if (*p >= 97 && *p <= 122)
		{
			/* minus 32 if lowercase */
			*p -= 32;
		}
		p++;
	}
	return (s);
}
