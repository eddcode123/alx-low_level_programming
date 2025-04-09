#include <stdio.h>
#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: pointer to an array of characters
 * Return: Nothing
*/

void rev_string(char *s)
{
	int len = 0;
	int i, temp, mid;

	/* Compute string length */
	while (s[len] != '\0')
	{
		len++;
	}

	/* find the midpoint */
	mid = len / 2;

	/* Reverse the string in place */
	for (i = 0; i < mid; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
