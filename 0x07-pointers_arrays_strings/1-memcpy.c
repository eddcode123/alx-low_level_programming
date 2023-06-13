#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to dest
 * @n: bytes to be copied to dest
 * @src: pointer to source string
 * @dest: pointer to destination string
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* use for loop to copy n bytes to dest */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
