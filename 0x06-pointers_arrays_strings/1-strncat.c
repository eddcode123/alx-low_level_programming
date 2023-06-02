#include "main.h"

/**
 * _strncat - concatenates two strings till n characters.
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of charcters to be appened
 *
 * Return: pointer resulting dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	/* store dest in a ptr pointer */
	char *ptr = dest;

	/* go to end of dest string */
	while (*dest != '\0')
	{
		dest++;
	}
	/* append n characters */
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (ptr);
}
