#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - everses a string.
 * @s: string to reverse
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, len, middle, temp;

	/* find string length */
	len = strlen(s);
	/* find the middle of the string */
	middle = len / 2;
	/* reverse string */
	for (i = 0; i < middle; i++)
	{
		/* swap 1st char with last char till middle */
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
