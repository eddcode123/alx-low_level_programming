#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: head of list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	/* declare current pointer */
	listint_t *current;
	/* check if list empty */
	if (head == NULL)
		return;
	/* traverse the list and free each node */
	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
