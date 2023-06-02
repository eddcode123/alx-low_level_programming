#include "main.h"

/**
 * _strncpy - copies n characters of a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: characters to be copied
 *
 * Return: pointer to resulting dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* check for null terminatior & when n is 0 */
	if (*dest == '\0' || *src == '\0' || n == 0)
	{
		return (dest);
	}
	/* copy to dest from src */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	/* add null till i < n */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
