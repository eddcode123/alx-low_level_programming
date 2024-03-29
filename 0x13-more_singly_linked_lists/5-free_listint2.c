#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: head of list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	/* declare current pointer */
	listint_t *current;
	listint_t *temp;

	/* check if list is not empty */
	if (head != NULL)
	{
		/* point temp to where head is pointing */
		temp = *head;
		/* traverse the list and free each node */
		while ((current = temp) != NULL)
		{
			temp = temp->next;
			free(current);
		}
		/* set head to NULL */
		*head = NULL;
	}
}
