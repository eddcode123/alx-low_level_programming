#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* create a pointer to concate string */
	char *ptr;
	unsigned int i, j;
	/* check if nothing is passed */
	if (s1 == NULL)
	{
        /* treat s1 & s2 as empty strings */
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";
	/* allocate memory using malloc */
	ptr = (char *)malloc(sizeof(char) * (strlen(s1 + strlen(s2) + 1)));
	/* check for null */
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* copy s1 to ptr */
	for (i = 0; i < strlen(s1); i++)
	{
		ptr[i] = s1[i];
	}

	/* check if n is >= s2 */
	if (n >= strlen(s2))
	{
		for (j = 0; j < strlen(s2); j++)
		{
			ptr[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			ptr[i] = s2[j];
			i++;
		}
	}
	/* add null terminator to indicate end of string */
	*ptr = '\0';

	return (ptr);
}