#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Function that concatinates 2 strings
 * @s1: pointer to the string
 * @s2: pointer to string
 * @n: number of n bytes to copy from s2
 * Return: pointer to concatinated string or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len_1, len_2;

	/* handle edge cases */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n <= 0)
	{
		return (NULL);
	}
	/* find len of strings */
	for (len_1 = i = 0; s1[i] != '\0'; i++)
	{
		len_1++;
	}
	for (len_2 = i = 0; s2[i] != '\0' && i < n; i++)
	{
		len_2++;
	}

	/* allocate memory */
	str = (char *) malloc((len_1 + len_2 + 1) * sizeof(char));

	if (!str)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < len_2; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j] = '\0';

	return (str);
}
