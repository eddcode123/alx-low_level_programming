#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - Function that locates a substring in a string
 * @haystack: string to be scaned for substring
 * @needle: substring to be searched in haystack
 * Return: pointer to the first occurance of needle in haystack
 * else null
*/
char *_strstr(char *haystack, char *needle)
{
	char *n, *h;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*n == *h))
		{
			n++;
			h++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
