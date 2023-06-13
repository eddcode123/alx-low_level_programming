#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to string to be checked
 * @accept: pointer to string to compare to
 *
 * Return: unsigned lenghth of substring
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i, j, len1, len2, check;

	len1 = strlen(s);
	len2 = strlen(accept);
	/* use for loop to compare each char of accept through s */
	for (i  = 0; i < len1; i++)
	{
		check = 0;
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				check = 1;
			}
		}
		if (check == 0)
		{
			return (count);
		}
	}

	return (count);
}
