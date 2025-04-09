#include "main.h"

/**
 * _strcpy - Implements the functionalty of strcpy
 * @src: pointer to the original string
 * @dest: pointer to the copied string
 * Return: pointer to dest
*/
char *_strcpy(char *src, char *dest)
{
	char *temp = dest;

	/* copy src string to dest */
	while (*src != '\0')
	{
		*src = *temp;
		src++;
		temp++;
	}
	/* move dest to and add null terminator */
	temp++;
	*temp = '\0';
	return (dest);
}
