#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest
 * @src: Pointer to the source string
 * @dest: Pointer to the destination buffer
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	/* Copy src string to dest */
	while (*src != '\0')
	{
		*temp = *src;
		src++;
		temp++;
	}

	/* Add null terminator to dest */
	*temp = '\0';

	return (dest);
}
