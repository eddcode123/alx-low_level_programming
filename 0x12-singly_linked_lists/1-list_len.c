#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - finds the size of the linked list
 * @h: pointer to the first node
 *
 * Return: size of the linked list
*/
size_t list_len(const list_t *h)
{
	size_t size = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}

	return (size);
}
