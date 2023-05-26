#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string, starting 1st
 * @str: string to print
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i, len;

	/* find the len of string */
	len = strlen(str);
	/* print string */
	for (i = 0; i < len; i++)
	{
		if (i > 0)
		{
			i += 1;
			printf("%c", str[i]);
		}
		else
			printf("%c", str[i]);
	}
	printf("\n");
}
