#include <string.h>
#include "main.h"

/**
 * _strncpy - copy n characters from scr
 * @dest - pointer to destination string
 * @src - pointer to source string
 * @n: max number to be copied from src string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
