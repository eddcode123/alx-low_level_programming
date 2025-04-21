#include "main.h"

/**
 * _strncpy - function that copies n bytes of a string
 * @dest: pointer to location to copy string
 * @src: pointer to the string to copy
 * @n: number of bytes to be copied
 * Return: Pointer to the copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *str = src;

	while (*str != '\0' && i < n)
	{
		*dest = *str;
		str++;
		dest++;
		i++;
	}
	dest++;
	dest = '\0';

	return (dest);
}
