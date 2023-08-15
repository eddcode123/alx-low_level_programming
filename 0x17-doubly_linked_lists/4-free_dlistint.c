#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list.
 * @head: head of list.
 *
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	/* declare prev pointer */
	dlistint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
