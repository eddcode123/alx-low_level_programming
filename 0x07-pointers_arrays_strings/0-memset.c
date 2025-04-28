#include "main.h"

/**
 * _memset - Function that sets a buffer with a specific value
 * @s: pointer to the starting address of buffer to be set.
 * @b: data to fill the buffer
 * @n: size of buffer
 * Return: pointer to the set buffer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
