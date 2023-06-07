#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to string
 *
 * Return: pointer to resulting string
 */

char *rot13(char *s)
{
	int i;
	char *p = s;

	/* store alphabet in sting */
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	/* store alphabet rotated 13 positions in rot13 string */
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	/* loop through each character of s */
	while (*p != '\0')
	{
		/* loop trough each char of alpha */
		for (i = 0; i < 52; i++)
		{
			/* use if to check if char in s match char in alpha */
			if (*p == alpha[i])
			{
				/* assign rot13 char to char in s */
				*p = rot13[i];
				break;
			}
		}
		p++;
	}
	return (s);
}
