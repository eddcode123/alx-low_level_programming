#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatinates two strings
 * @dest: pointer to the first string character of string
 * @src: pointer to first character of the second string
 * Return: pointer to concatinated string
*/

char *_strcat(char *dest, char *src)
{
	int corsor = 0;
	char *temp = src;

	/* move to the end of the dest string */
	while (dest[corsor] != '\0')
	{
		corsor++;
	}

	/* overwrite the null terminator and append src string */
	while (*temp != '\0')
	{
		dest[corsor] = *temp;
		temp++;
		corsor++;
	}
	dest[corsor] = '\0';

	return (dest);
}
