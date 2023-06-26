#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new location string copy.
 * @str: pointer to source string
 *
 * Return: pointer to duplicate malloc and null if malloc return null
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i = 0, j;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	ptr = (char *)malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		ptr[j] = str[j];

	return (ptr);
}
