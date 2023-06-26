#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a duplicate of the string str.
 * @str: pointer to source string
 *
 * Return: pointer to duplicate malloc and null if malloc return null
 */

char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	strout = (char *)malloc(sizeof(char) * (i + 1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strout[j] = str[j];

	return (strout);
}
