#include "main.h"

/**
 * _strcpy - Implements the functionalty of strcpy
 * @src: pointer to the original string
 * @dest: pointer to the copied string
 * Return: pointer to dest
*/
char *_strcpy(char *src, char *dest)
{
	char *start = dest;

	/* copy src string to dest */
	while (*src != '\0')
	{
		*src = *dest;
		src++;
		dest++;
	}
	/* move dest to and add null terminator */
	dest++;
	*dest = '\0';
	/* reset dest to point to the start of the string */
	dest = start;

	return (dest);
}
