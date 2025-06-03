#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 * @n: Number of bytes to copy from s2.
 *
 * Return: Pointer to the concatenated string or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;
	unsigned int len_1, len_2;

	/* Treat NULL inputs as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	for (len_1 = 0; s1[len_1] != '\0'; len_1++)
		;
	for (len_2 = 0; s2[len_2] != '\0'; len_2++)
		;

	/* Limit len_2 to n bytes if n is smaller */
	if (len_2 > n)
		len_2 = n;

	/* Allocate memory for the new string */
	str = malloc((len_1 + len_2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/* Copy s1 into the new string */
	for (i = 0; i < len_1; i++)
		str[i] = s1[i];

	/* Append the first len_2 characters of s2 to the new string */
	for (j = 0; j < len_2; j++)
		str[len_1 + j] = s2[j];

	/* Null-terminate the resulting string */
	str[len_1 + len_2] = '\0';

	return (str);
}
