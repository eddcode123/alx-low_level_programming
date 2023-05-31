#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string pointed
 * @src: string pointed to be appened
 * @n: maximum bytes to be used
 *
 * Return:  pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
