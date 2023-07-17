#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: size to be passed to function
 *
 * Return: pointer to allocated memory or 98 exit status for failure
 */

void *malloc_checked(unsigned int b)
{
	/* create a void pointer */
	void *ptr;
	/* allocated memory using malloc */
	ptr = malloc(b);
	/* check if malloc returns null */
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
