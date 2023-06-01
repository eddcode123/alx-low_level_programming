#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: pointer to a string to be appended to
 * @src: pointer to source string to be added
 *
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	/* declare and initialize a string pointer */
	char *ptr = dest;

	/* loop to the end of the last element of dest */
	while (*ptr != '\0')
	{
		ptr++;
	}
	/* append src to dest */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	/* add null termintor at the end of ptr */
	*ptr = '\0';

	return (dest);
}
