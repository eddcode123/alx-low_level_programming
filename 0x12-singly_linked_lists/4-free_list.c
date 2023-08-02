#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: head of list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	/* declare current pointer */
	list_t *current;

	/* use a while loop to free node */
	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
