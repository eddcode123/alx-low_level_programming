#include "main.h"

/**
 * _strncpy - copies n characters of a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: characters to be copied
 *
 * Return: pointer to resulting dest string
 */

char *_strncpy(char *dest, const char *src, int n)
{
	char *dest_start = dest;

	while (n > 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}
	/*Fill any remaining space in dest with null characters */
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}

	return (dest_start);
}
