#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string pointed
 * @src: string pointed to be appened
 *
 * Return:  pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Move the pointer to the end of the destination string */
	while (*ptr != '\0')
	{
		ptr++;
	}
	/* copy src to end of dest string */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	/* add the null terminator at the end of the concat string */
	*ptr = '\0';

	return (dest);
}
