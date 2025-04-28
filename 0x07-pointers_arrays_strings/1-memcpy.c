#include "main.h"

/**
 * _memcpy - Function that copies one memory block from one loctaion to another
 * @dest: pointer to destination memory block where data will be copied
 * @src: pointer to source memory block where data will be copied from
 * @n: number of bytes to copy
 * Return: pointer to destination buffer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
