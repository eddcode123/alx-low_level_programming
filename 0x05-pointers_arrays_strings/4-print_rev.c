#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 * @s: string to print in reverse
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int len, i;

	/* find the length of the string */
	len = strlen(s);
	/* use a for loop to print in reverse */
	for (i = len; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
