#include "main.h"

/**
 * _strncat - Function that concatenates n bytes of two strings.
 * @dest: Pointer to the first string (destination).
 * @src: Pointer to the second string (source).
 * @n: n of bytes of src to concatenate
 * Return: Pointer to the concatenated string.
*/

char *_strncat(char *dest, char *src, int n)
{
	int cursor = 0;
	char *str = src;

	while (src[cursor] != '\0')
	{
		if (src[cursor] < n)
		{
			cursor++;
		}
	}

	while (*str != '\0')
	{
		dest[cursor] = *str;
		str++;
		cursor++;
	}
	dest[cursor] = '\0';

	return (dest);
}
