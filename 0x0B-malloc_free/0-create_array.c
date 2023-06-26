#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars & initializes it.
 * @size: size of array of char
 * @c: char to be entered in base address
 *
 * Return: pointer to string
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	/*check if size is 0 */
	if (size == 0)
	{
		return (NULL);
	}
	/* assign bytes to array using malloc */
	ptr = (char *) malloc(size * sizeof(char));
	/* if malloc has returned null */
	if (ptr == NULL)
		return (NULL);
	/*initialize array with c*/
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
	free(ptr);

	return (ptr);
}
