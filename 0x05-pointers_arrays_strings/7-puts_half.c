#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: string to print
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, middle, len;

	/* find len of a string */
	len = strlen(str);
	/* find middle */
	if (len % 2 != 0)
		middle = (len / 2) + 1;
	else
		middle = len / 2;
	/* use loop to print */
	for (i = middle; i <= len - 1; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
