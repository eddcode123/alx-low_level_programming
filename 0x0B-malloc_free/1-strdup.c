#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - eturns a pointer to a new string which is a duplicate of the string str.
 * @str: pointer to source string
 *
 * Return: pointer to duplicate malloc and null if malloc return null
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i = 0, j = 0;

	/* chech if str is null */
	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		i += 1;
		str++;
	}
	/* check if malloc return value is null */
	ptr = (char *) malloc(i * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* copy str to ptr */
	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
