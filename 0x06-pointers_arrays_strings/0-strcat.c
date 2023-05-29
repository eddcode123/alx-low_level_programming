#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string pointed
 * @src: string pointed to be appened
 *
 * Return:  pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, lastindex, lendest;

	/* find lenght of string in dest */
	lendest = strlen(dest);
	/* find the last index of dest */
	lastindex = lendest - 1 - 1;
	/* append src to dest */
	for (i = lastindex; i >= lendest; i++)
	{
		if (i == lastindex && i != '\0')
			dest[i + 1] = ' ';
		else
		{
			for(j = 0; src[j] != '\0'; j++)
			{
				dest[i + 1] = src[j];
			}
		}
	}
	return (dest);
}
