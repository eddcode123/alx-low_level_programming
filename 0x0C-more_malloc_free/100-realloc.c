#include <stdlib.h>
#include "main.h"

/**
 * _realloc - relocates memory block using malloc and free
 * @ptr: point to memory previously allocated
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: new size in bytes of new memory block
 *
 * Return: pointer to new allcated memory
 * if old == new return ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);


	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
