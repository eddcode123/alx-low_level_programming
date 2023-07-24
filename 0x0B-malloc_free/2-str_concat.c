#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two string
 * @s1: string to be concat
 * @s2: string to concat to
 *
 * Return: pointer to new allocated memory with concat string aor null
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, k, len = 0;

	/* check if the string is empty */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* find length of s1 */
	for (i = 0; s1[i] != '\0'; i++)
		;
	/* find strlen of s2 */
	for (j = 0; s2[j] != '\0'; j++)
		;
	/* add  len of s1 and s2 */
	len = i + j;
	/* use malloc to allocate bytes to concat */
	concat = (char *) malloc(sizeof(char) * (len + 1));
	/* check if malloc return NULL */
	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}
	/* concatenate s1 and s2 to concat */
	for (k = 0; k < i; k++)
	{
		concat[k] = s1[k];
	}
	for (j = 0; j < strlen(s2); j++, k++)
	{
		concat[k] = s2[j];
	}
	return (concat);

}
