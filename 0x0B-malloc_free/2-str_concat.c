#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two string
 * @s1: string to be concat
 * @s2: string to concat to
 *
 * Return: pointer to new allocated memory with concat string aor null
 */

char *str_concat(char *s1, char *s2)
{
	char *concat, *ptr, *ptr1;
	unsigned int i, j, len = 0;

	ptr = s1;
	ptr1 = s2;
	/* check if the string is empty */
	if (s1 == NULL && s2 == NULL)
		return (NULL);
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
		return (NULL);
	while (*ptr != '\0')
	{
		*concat = *ptr;
		ptr++;
		concat++;
	}
	while (*ptr1 != '\0')
	{
		*concat = *ptr1;
		concat++;
		ptr1++;
	}
	/* copy ptr string to concat */
	*concat = '\0';
	
	return (concat);

}
