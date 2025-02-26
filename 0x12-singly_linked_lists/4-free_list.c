#include "lists.h"

/**
 * free_list - frees memory allocated to a linked list.
 * @head: head of list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	/* declare temp pointer */
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp->str);
		free(temp);
	}
	
}
