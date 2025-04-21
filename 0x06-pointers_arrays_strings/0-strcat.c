#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * @dest: Pointer to the first string (destination).
 * @src: Pointer to the second string (source).
 * Return: Pointer to the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int cursor = 0;
	char *temp = src;

	/* Move to the end of the dest string */
	while (dest[cursor] != '\0')
	{
		cursor++;
	}

	/* Overwrite the null terminator and append src string */
	while (*temp != '\0')
	{
		dest[cursor] = *temp;
		temp++;
		cursor++;
	}
	dest[cursor] = '\0';

	return (dest);
}
