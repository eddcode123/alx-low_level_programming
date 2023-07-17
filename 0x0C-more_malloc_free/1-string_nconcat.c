#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatinate to strings
 * @s1: pointer to string
 * @s2: pointer to string
 * @n:  n bytes to be coped to s1
 *
 * Return: pointer to concat string or null if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* create a pointer to concate string */
	char *ptr;
	unsigned int i, lens2, lencon, j = 0;


	/* check if nothing is passed */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* find len of s2 */
	lens2 = strlen(s2);
	if (n >= lens2)
		n = lens2;
	lencon = n + strlen(s1);
	/* allocate memory using malloc */
	ptr = malloc(lencon + 1);
	/* check for null */
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* concate s1 & s2 in ptr */
	for (i = 0; i < lencon; i++)
	{
		if (i < strlen(s1))
			ptr[i] = s1[i];
		else if (j < lens2)
		{
			ptr[i] = s2[j];
			j++;
		}
	}
	/* add null terminator to indicate end of string */
	ptr[i] = '\0';

	return (ptr);
}
