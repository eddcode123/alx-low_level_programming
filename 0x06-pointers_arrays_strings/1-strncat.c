#include "main.h"

/**
 * _strncat - Function that concatenates up to n bytes of two strings.
 * @dest: Pointer to the first string (destination).
 * @src: Pointer to the second string (source).
 * @n: Number of bytes of src to concatenate.
 * Return: Pointer to the concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int cursor = 0, i = 0;

	/* Move to the end of the dest string */
	while (dest[cursor] != '\0')
	{
		cursor++;
	}

	/* Append at most n bytes of src to dest */
	while (i < n && src[i] != '\0')
	{
		dest[cursor] = src[i];
		cursor++;
		i++;
	}

	/* Null-terminate the result */
	dest[cursor] = '\0';

	return (dest);
}
