#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Prints the values of all the nodes in a linked list
 * @h: Pointer to the first node in the linked list
 *
 * Return: The length of the linked list
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);

		size++;
		temp = temp->next;
	}

	return (size);
}
