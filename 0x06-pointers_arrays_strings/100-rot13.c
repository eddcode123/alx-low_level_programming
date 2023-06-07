#include "main.h"
#include <ctype.h>

/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to string
 *
 * Return: pointer to resulting string
 */

char *rot13(char *s)
{
	int count = 0, i;
	char *p = s;

	/* store alphabet in sting */
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	/* store alphabet rotated 13 positions in rot13 string */
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	/* loop through each character */
	while (*(p + count) != '\0')
	{
		/* use loop to check each char in string */
		for (i = 0; i < 52; i++)
		{
			/* use if to check if char match */
			if (*(p + count) == alpha[i])
			{
				*(p + count) = rot13[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
