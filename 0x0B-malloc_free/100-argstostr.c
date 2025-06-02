#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Function that creates a string from
 * all the arguments passed
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to string or NULL
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	len = 0;
	k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	/* calculate the total len */
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}
	/* allocate memory for new string */
	str = malloc((len + ac) * sizeof(char));

	if (!str)
	{
		return (NULL);
	}
	/* concatenate all the arguments passed */
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			str[k] = av[i][j];
		}
		/* add a new line at the end of each argument */
		str[k++] = '\n';
	}
	/* add null terminator */
	str[k] = '\0';

	return (str);
}
