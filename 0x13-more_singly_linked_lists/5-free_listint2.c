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
	/* point temp to where head is pointing */
	temp = *head;
	/* check if list empty */
	if (temp == NULL)
		return;
	/* traverse the list and free each node */
	while ((current = temp) != NULL)
	{
		temp = temp->next;
		free(current);
	}
	/* set head to NULL */
	if (*head != NULL)
		*head = NULL;
}
