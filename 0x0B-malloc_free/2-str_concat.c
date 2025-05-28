#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatinates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: pointer to concatinated string or NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len_s1, len_s2;
	int i, j;

	/* handling NULL being passed as param */
	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	/* compute len of both strings */
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	/* dynamically allocate memory to store string */
	str = (char *) malloc((len_s1 + len_s2 + 1) * sizeof(char));

	/* check if malloc failed */
	if (str == NULL)
	{
		return (NULL);
	}

	/* concatinate the strings */
	for (i = 0; i < len_s1; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < len_s2; j++)
	{
		str[i + j] = s2[j];
	}
	/* assign null terminator */
	str[i + j] = '\0';

	return (str);
}
