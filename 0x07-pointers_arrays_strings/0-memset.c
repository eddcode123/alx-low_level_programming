#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: pointer to string
 * @b: constant byte to fill n bytes
 * @n: bytes to be filled
 *
 * Return: pointer to resulting string
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		p[i] = b;
	}

	return (s);
}
