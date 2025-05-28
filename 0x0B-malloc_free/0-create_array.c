#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of array
 * @c: value to initialize array with
 * Return: pointer to the created array or Null
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	char *temp;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}

	array = (char *) malloc(size * sizeof(char));

	/* initialize array with c */
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	temp = array;

	free(temp);
	return (array);
}
